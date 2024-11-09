#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "car.h"

// Create a new car
Car* create_car(int id, const char* make, const char* model, int year, const char* license_plate) {
    Car* car = (Car*)malloc(sizeof(Car));
    if (car == NULL) {
        return NULL;
    }
    car->id = id;
    strncpy(car->make, make, sizeof(car->make) - 1);
    strncpy(car->model, model, sizeof(car->model) - 1);
    car->year = year;
    strncpy(car->license_plate, license_plate, sizeof(car->license_plate) - 1);
    return car;
}

// Display car information
void display_car(Car* car) {
    if (car != NULL) {
        printf("Car ID: %d\n", car->id);
        printf("Make: %s\n", car->make);
        printf("Model: %s\n", car->model);
        printf("Year: %d\n", car->year);
        printf("License Plate: %s\n", car->license_plate);
    }
}

// Free car memory
void free_car(Car* car) {
    if (car != NULL) {
        free(car);
    }
}
