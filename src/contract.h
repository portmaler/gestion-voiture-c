#ifndef CONTRACT_H
#define CONTRACT_H

#include "car.h"
#include "client.h"

typedef struct {
    int id;
    int car_id;
    int client_id;
    char start_date[11]; // format: YYYY-MM-DD
    char end_date[11];   // format: YYYY-MM-DD
    double price;
} Contract;

// Function prototypes for contract management
Contract* create_contract(int id, int car_id, int client_id, const char* start_date, const char* end_date, double price);
void display_contract(Contract* contract);
void free_contract(Contract* contract);

#endif // CONTRACT_H
