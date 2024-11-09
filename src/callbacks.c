// callbacks.c
#include <gtk/gtk.h>
#include "callbacks.h"
#include "app_widgets.h"  // This can be the header where your AppWidgets struct is defined

// Signal handler for Add Car button
void on_add_car_button_clicked(GtkButton *button, gpointer user_data) {
    AppWidgets *widgets = user_data;
    gtk_stack_set_visible_child(GTK_STACK(widgets->stack), widgets->add_car_box);
}

// Signal handler for Add Client button (empty for now)
void on_add_client_button_clicked(GtkButton *button, gpointer user_data) {
    // Add logic for Add Client view later
}

// Signal handler for Add Contract button (empty for now)
void on_add_contract_button_clicked(GtkButton *button, gpointer user_data) {
    // Add logic for Add Contract view later
}

// Signal handler for window destruction
void on_main_window_destroy(GtkWidget *widget, gpointer data) {
    gtk_main_quit();
}
