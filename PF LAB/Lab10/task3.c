#include <stdio.h>
#include <string.h>

#define MAX_FLIGHTS 100

typedef struct
{
    int flight_number;
    char departure_city[50];
    char destination_city[50];
    char date[20];
    int available_seats;
} Flight;

void display_flight_details(Flight f)
{
    printf("Flight Number: %d\n", f.flight_number);
    printf("Departure City: %s\n", f.departure_city);
    printf("Destination City: %s\n", f.destination_city);
    printf("Date: %s\n", f.date);
    printf("Available Seats: %d\n\n", f.available_seats);
}

void book_seat(Flight *f)
{
    if (f->available_seats > 0)
    {
        f->available_seats--;
        printf("Seat booked successfully! Remaining seats: %d\n", f->available_seats);
    }
    else
    {
        printf("No seats available.\n");
    }
}

int main()
{
    Flight flights[MAX_FLIGHTS];
    int num_flights = 0;
    int choice, flight_index;

    while (1)
      {
        printf("\n1. Add Flight\n2. Display Flight Details\n3. Book a Seat\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            if (num_flights < MAX_FLIGHTS)
            {
                printf("Enter Flight Number: ");
                scanf("%d", &flights[num_flights].flight_number);
                printf("Enter Departure City: ");
                scanf("%s", flights[num_flights].departure_city);
                printf("Enter Destination City: ");
                scanf("%s", flights[num_flights].destination_city);
                printf("Enter Date (DD/MM/YYYY): ");
                scanf("%s", flights[num_flights].date);
                printf("Enter Available Seats: ");
                scanf("%d", &flights[num_flights].available_seats);
                num_flights++;
                printf("Flight added successfully!\n");
            }
            else
            {
                printf("Maximum number of flights reached.\n");
            }
        }
        else if (choice == 2)
        {
            for (int i = 0; i < num_flights; i++)
              {
                display_flight_details(flights[i]);
            }
        }
        else if (choice == 3)
        {
            printf("Enter Flight Index (0 to %d): ", num_flights - 1);
            scanf("%d", &flight_index);
            if (flight_index >= 0 && flight_index < num_flights)
            {
                book_seat(&flights[flight_index]);
            }
            else
            {
                printf("Invalid flight index.\n");
            }
        }
        else if (choice == 4)
        {
            break;
        }
        else
        {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
