#include <gtk/gtk.h>
#include "app_widgets.h"
#include "car.h"
#include "client.h"
#include "contract.h"

// Callback for the "Add Car" button
void on_add_car_button_clicked(GtkButton *button, gpointer user_data) {
    AppWidgets *widgets = (AppWidgets*)user_data;

    // Here you could add code to open a dialog or input form to add a car.
    Car *car = create_car(1, "Toyota", "Camry", 2022, "ABC-1234");  // Added license_plate argument
    display_car(car);
    free_car(car);

    g_print("Add Car button clicked\n");
}


// Callback for the "Add Client" button
void on_add_client_button_clicked(GtkButton *button, gpointer user_data) {
    AppWidgets *widgets = (AppWidgets*)user_data;

    // Example of adding a client
    Client *client = create_client(1, "John Doe", "123 Main St");
    display_client(client);
    free_client(client);

    g_print("Add Client button clicked\n");
}

// Callback for the "Add Contract" button
void on_add_contract_button_clicked(GtkButton *button, gpointer user_data) {
    AppWidgets *widgets = (AppWidgets*)user_data;

    // Example of creating a contract
    Contract *contract = create_contract(1, 1, 1, "2023-01-01", "2023-12-31", 5000.0);
    display_contract(contract);
    free_contract(contract);

    g_print("Add Contract button clicked\n");
}

// Callback for main window destroy event
void on_main_window_destroy(GtkWidget *widget, gpointer user_data) {
    gtk_main_quit();
}

