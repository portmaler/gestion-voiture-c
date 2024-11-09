#ifndef CAR_H
#define CAR_H

typedef struct {
    int id;
    char make[50];
    char model[50];
    int year;
    char license_plate[20];
} Car;

// Function prototypes for car management
Car* create_car(int id, const char* make, const char* model, int year, const char* license_plate);
void display_car(Car* car);
void free_car(Car* car);

#endif // CAR_H
