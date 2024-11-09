// callbacks.h
#ifndef CALLBACKS_H
#define CALLBACKS_H

void on_add_car_button_clicked(GtkButton *button, gpointer user_data);
void on_add_client_button_clicked(GtkButton *button, gpointer user_data);
void on_add_contract_button_clicked(GtkButton *button, gpointer user_data);
void on_main_window_destroy(GtkWidget *widget, gpointer data);

#endif // CALLBACKS_H
