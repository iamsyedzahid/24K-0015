#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int compareSalary(const void *a, const void *b) {
    struct Employee *e1 = (struct Employee *)a;
    struct Employee *e2 = (struct Employee *)b;
    return (e1->salary > e2->salary) - (e1->salary < e2->salary);
}

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee *employees = (struct Employee *)malloc(n * sizeof(struct Employee));
    for (int i = 0; i < n; i++) {
        printf("Enter ID, Name, and Salary for Employee %d: ", i + 1);
        scanf("%d %s %f", &employees[i].id, employees[i].name, &employees[i].salary);
    }

    qsort(employees, n, sizeof(struct Employee), compareSalary);

    printf("\nEmployees Sorted by Salary:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }

    free(employees);
    return 0;
}
