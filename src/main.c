#include <gtk/gtk.h>
#include "app_widgets.h"

// Function to load the UI and set up the application
int main(int argc, char *argv[]) {
    GtkBuilder *builder;
    GtkWidget *main_window;
    AppWidgets *widgets = g_slice_new(AppWidgets);

    gtk_init(&argc, &argv);

    // Load the Glade file
    builder = gtk_builder_new_from_file("glade/car_management.glade");

    // Get the main window and connect signals
    main_window = GTK_WIDGET(gtk_builder_get_object(builder, "main_window"));
    gtk_builder_connect_signals(builder, widgets);

    // Show the main window
    gtk_widget_show_all(main_window);

    // Free builder and start the main GTK loop
    g_object_unref(builder);
    gtk_main();

    // Free allocated memory for widgets
    g_slice_free(AppWidgets, widgets);

    return 0;
}
