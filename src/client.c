#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "client.h"

// Create a new client
Client* create_client(int id, const char* name, const char* contact_info) {
    Client* client = (Client*)malloc(sizeof(Client));
    if (client == NULL) {
        return NULL;
    }
    client->id = id;
    strncpy(client->name, name, sizeof(client->name) - 1);
    strncpy(client->contact_info, contact_info, sizeof(client->contact_info) - 1);
    return client;
}

// Display client information
void display_client(Client* client) {
    if (client != NULL) {
        printf("Client ID: %d\n", client->id);
        printf("Name: %s\n", client->name);
        printf("Contact Info: %s\n", client->contact_info);
    }
}

// Free client memory
void free_client(Client* client) {
    if (client != NULL) {
        free(client);
    }
}
