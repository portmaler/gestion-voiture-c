#include <gtk/gtk.h>
#include "callbacks.h"  // Include callback functions
#include "app_widgets.h"  // Include the AppWidgets struct definition

int main(int argc, char *argv[]) {
    GtkBuilder *builder;
    GtkWidget *main_window;
    AppWidgets *widgets = g_slice_new(AppWidgets);

    gtk_init(&argc, &argv);

    // Load Glade file
    builder = gtk_builder_new_from_file("glade/main.glade");

    // Get the main window and other widgets from the builder
    main_window = GTK_WIDGET(gtk_builder_get_object(builder, "main_window"));
    widgets->add_car_button = GTK_WIDGET(gtk_builder_get_object(builder, "add_car_button"));
    widgets->add_client_button = GTK_WIDGET(gtk_builder_get_object(builder, "add_client_button"));
    widgets->add_contract_button = GTK_WIDGET(gtk_builder_get_object(builder, "add_contract_button"));
    widgets->stack = GTK_WIDGET(gtk_builder_get_object(builder, "stack"));
    widgets->add_car_box = GTK_WIDGET(gtk_builder_get_object(builder, "add_car_box"));
    widgets->main_label = GTK_WIDGET(gtk_builder_get_object(builder, "main_label"));
    widgets->info_label = GTK_WIDGET(gtk_builder_get_object(builder, "info_label"));

    // Connect signal handlers
    gtk_builder_connect_signals(builder, widgets);

    // Show the main window
    gtk_widget_show(main_window);

    gtk_main();

    g_slice_free(AppWidgets, widgets);

    return 0;
}
