#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contract.h"

// Create a new contract
Contract* create_contract(int id, int car_id, int client_id, const char* start_date, const char* end_date, double price) {
    Contract* contract = (Contract*)malloc(sizeof(Contract));
    if (contract == NULL) {
        return NULL;
    }
    contract->id = id;
    contract->car_id = car_id;
    contract->client_id = client_id;
    strncpy(contract->start_date, start_date, sizeof(contract->start_date) - 1);
    strncpy(contract->end_date, end_date, sizeof(contract->end_date) - 1);
    contract->price = price;
    return contract;
}

// Display contract information
void display_contract(Contract* contract) {
    if (contract != NULL) {
        printf("Contract ID: %d\n", contract->id);
        printf("Car ID: %d\n", contract->car_id);
        printf("Client ID: %d\n", contract->client_id);
        printf("Start Date: %s\n", contract->start_date);
        printf("End Date: %s\n", contract->end_date);
        printf("Price: %.2f\n", contract->price);
    }
}

// Free contract memory
void free_contract(Contract* contract) {
    if (contract != NULL) {
        free(contract);
    }
}
