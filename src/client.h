#ifndef CLIENT_H
#define CLIENT_H

typedef struct {
    int id;
    char name[50];
    char contact_info[50];
} Client;

// Function prototypes for client management
Client* create_client(int id, const char* name, const char* contact_info);
void display_client(Client* client);
void free_client(Client* client);

#endif // CLIENT_H
