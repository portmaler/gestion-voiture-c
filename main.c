#include <gtk/gtk.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"structure.h"
#include"prototype.h"

typedef struct

int main(int argc, char *argv[])
{
    GtkBuilder      *builder;
    GtkWidget       *window;

    gtk_init(&argc, &argv);

    builder = gtk_builder_new_from_file("projetGestionVoiture.glade");

    window = GTK_WIDGET(gtk_builder_get_object(builder, "window_main"));
    gtk_builder_connect_signals(builder, NULL);

    g_object_unref(builder);

    gtk_widget_show(window);
    gtk_main();

    return 0;
}

/**********voiture*********/

void on_addVoiture_clicked(GtkButton *button, app_widgets *app_wdgts)
{
	ajoutervoiture();
}

void on_lisrVoiture_clicked(GtkButton *button, app_widgets *app_wdgts)
{
	ListeVoiture();
}

void on_updateVoiture_clicked(GtkButton *button, app_widgets *app_wdgts)
{
	modifiervoiture();
}

void on_button4_clicked(GtkButton *button, app_widgets *app_wdgts)
{
	supprimervoiture();
}

/*********contrat*****//// 

void on_visualisecontrat_clicked(GtkButton *button, app_widgets *app_wdgts)
{
	VisualiserContrat(int Numrech);
}

void on_louervoiture_clicked(GtkButton *button, app_widgets *app_wdgts)
{
	LouerVoiture();
}

void on_retournvoiture_clicked(GtkButton *button, app_widgets *app_wdgts)
{
	retournerVoiture();
}

void on_button4_clicked(GtkButton *button, app_widgets *app_wdgts)
{
	ModifierContrat();
}

void on_button5_clicked(GtkButton *button, app_widgets *app_wdgts)
{
	SupprimerContrat();
}

/**********client*********/

void on_addClient_clicked(GtkButton *button, app_widgets *app_wdgts)
{
	ajoutervoiture();
}

void on_lisrclient_clicked(GtkButton *button, app_widgets *app_wdgts)
{
	ListeClient();
}

void on_updateVoiture_clicked(GtkButton *button, app_widgets *app_wdgts)
{
	modifiervoiture();
}

void on_button4_clicked(GtkButton *button, app_widgets *app_wdgts)
{
	supprimervoiture();
}

void on_window_main_destroy()
{
    gtk_main_quit();
}
