#ifndef APP_WIDGETS_H
#define APP_WIDGETS_H

#include <gtk/gtk.h>

// Structure to hold pointers to important GTK widgets
typedef struct {
    GtkWidget *main_window;        // Main application window
    GtkWidget *car_list;           // Car list view widget
    GtkWidget *client_list;        // Client list view widget
    GtkWidget *contract_list;      // Contract list view widget
    GtkWidget *add_car_button;     // Button to add a new car
    GtkWidget *add_client_button;  // Button to add a new client
    GtkWidget *add_contract_button; // Button to add a new contract
} AppWidgets;

#endif // APP_WIDGETS_H
