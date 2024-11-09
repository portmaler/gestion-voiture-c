#ifndef APP_WIDGETS_H
#define APP_WIDGETS_H

#include <gtk/gtk.h>

typedef struct {
    GtkWidget *add_car_button;
    GtkWidget *add_client_button;
    GtkWidget *add_contract_button;
    GtkWidget *stack;
    GtkWidget *add_car_box;
    GtkWidget *main_label;
    GtkWidget *info_label;
} AppWidgets;

#endif // APP_WIDGETS_H
