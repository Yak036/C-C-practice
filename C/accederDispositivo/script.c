// Inclusión de bibliotecas necesarias
#include <stdio.h>      // Para funciones de entrada/salida
#include <stdlib.h>     // Para funciones generales
#include <string.h>     // Para manejo de strings
#include <libudev.h>    // Para monitorear dispositivos USB

int main() {
    struct udev *udev;         // Estructura principal de udev
    struct udev_monitor *mon;   // Monitor para eventos de dispositivos
    struct udev_device *dev;    // Estructura para almacenar información del dispositivo

    // Crear objeto udev - necesario para todas las operaciones
    udev = udev_new();
    if (!udev) {
        printf("No se pudo crear la clase udev \n");
        return 1;
    }

    // Configurar el monitor para escuchar eventos de dispositivos USB
    mon = udev_monitor_new_from_netlink(udev, "udev");
    udev_monitor_filter_add_match_subsystem_devtype(mon, "usb", NULL);  // Filtrar solo eventos USB
    udev_monitor_enable_receiving(mon);  // Activar la recepción de eventos

    // Bucle infinito para monitorear eventos de dispositivos
    while (1) {
        dev = udev_monitor_receive_device(mon);  // Esperar por un nuevo evento
        if (dev) {
            // Obtener información del dispositivo
            const char *action = udev_device_get_action(dev);    // Tipo de evento (añadir, remover, etc)
            const char *devnode = udev_device_get_devnode(dev);  // Ruta del dispositivo
            const char *vendor = udev_device_get_sysattr_value(dev,"manufacturer");   // Fabricante
            const char *product = udev_device_get_sysattr_value(dev,"product");       // Producto

            // Si el evento es de tipo "añadir", mostrar información del dispositivo
            if (strcmp(action, "add") == 0) {
                printf("--------------------\n");
                printf("Nuevo dispositivo conectado:\n");
                if (vendor) printf("Marca: %s\n", vendor);
                if (product) printf("Nombre del producto: %s\n", product);
                if (devnode) printf("Ubicacion del dispositivo: %s\n", devnode);
                printf("--------------------\n");
            }

            udev_device_unref(dev);  // Liberar memoria del dispositivo
        }
    }

    // Limpieza final - liberar recursos
    udev_monitor_unref(mon);
    udev_unref(udev);
    return 0;
}
