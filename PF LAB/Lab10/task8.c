#include <stdio.h>
#include <string.h>

#define MAX_CARS 100

typedef struct
{
    char make[50], model[50];
    int year, mileage;
    float price;
} Car;

void add_car(Car cars[], int *num_cars)
{
    printf("Enter Make: ");
    scanf("%s", cars[*num_cars].make);
    printf("Enter Model: ");
    scanf("%s", cars[*num_cars].model);
    printf("Enter Year: ");
    scanf("%d", &cars[*num_cars].year);
    printf("Enter Mileage: ");
    scanf("%d", &cars[*num_cars].mileage);
    printf("Enter Price: ");
    scanf("%f", &cars[*num_cars].price);
    (*num_cars)++;
}

void display_cars(Car cars[], int num_cars)
{
    for (int i = 0; i < num_cars; i++)
      {
        printf("Make: %s, Model: %s, Year: %d, Mileage: %d, Price: %.2f\n",
               cars[i].make, cars[i].model, cars[i].year, cars[i].mileage, cars[i].price);
    }
}

void search_cars(Car cars[], int num_cars)
{
    char keyword[50];
    printf("Enter Make or Model to Search: ");
    scanf("%s", keyword);
    for (int i = 0; i < num_cars; i++)
      {
        if (strcmp(cars[i].make, keyword) == 0 || strcmp(cars[i].model, keyword) == 0)
        {
            printf("Make: %s, Model: %s, Year: %d, Mileage: %d, Price: %.2f\n",
                   cars[i].make, cars[i].model, cars[i].year, cars[i].mileage, cars[i].price);
        }
    }
}

int main()
{
    Car cars[MAX_CARS];
    int num_cars = 0, choice;

    while (1)
      {
        printf("\n1. Add Car\n2. Display Cars\n3. Search Cars\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) add_car(cars, &num_cars);
        else if (choice == 2) display_cars(cars, num_cars);
        else if (choice == 3) search_cars(cars, num_cars);
        else if (choice == 4) break;
        else printf("Invalid choice.\n");
    }

    return 0;
}
