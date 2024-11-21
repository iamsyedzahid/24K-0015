#include <stdio.h>
#include <string.h>

#define MAX_PACKAGES 100

typedef struct
{
    char name[50], destination[50];
    int duration, cost, seats_available;
} Package;

void add_package(Package packages[], int *num_packages)
{
    printf("Enter Package Name: ");
    scanf("%s", packages[*num_packages].name);
    printf("Enter Destination: ");
    scanf("%s", packages[*num_packages].destination);
    printf("Enter Duration (days): ");
    scanf("%d", &packages[*num_packages].duration);
    printf("Enter Cost: ");
    scanf("%d", &packages[*num_packages].cost);
    printf("Enter Available Seats: ");
    scanf("%d", &packages[*num_packages].seats_available);
    (*num_packages)++;
}

void book_package(Package *p)
{
    if (p->seats_available > 0)
    {
        p->seats_available--;
        printf("Package booked successfully! Remaining seats: %d\n", p->seats_available);
    }
    else printf("No seats available.\n");
}

void display_packages(Package packages[], int num_packages)
{
    for (int i = 0; i < num_packages; i++)
      {
        printf("Name: %s, Destination: %s, Duration: %d days, Cost: %d, Seats: %d\n",
               packages[i].name, packages[i].destination, packages[i].duration,
               packages[i].cost, packages[i].seats_available);
    }
}

int main()
{
    Package packages[MAX_PACKAGES];
    int num_packages = 0, choice, package_index;

    while (1)
      {
        printf("\n1. Add Package\n2. Display Packages\n3. Book Package\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) add_package(packages, &num_packages);
        else if (choice == 2) display_packages(packages, num_packages);
        else if (choice == 3)
        {
            printf("Enter Package Index (0 to %d): ", num_packages - 1);
            scanf("%d", &package_index);
            if (package_index >= 0 && package_index < num_packages)
                book_package(&packages[package_index]);
            else printf("Invalid index.\n");
        }
        else if (choice == 4) break;
        else printf("Invalid choice.\n");
    }

    return 0;
}
