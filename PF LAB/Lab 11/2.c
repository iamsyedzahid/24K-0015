#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

void save_employee_info(struct Employee employees[], int count) {
    FILE *file = fopen("employees.dat", "wb");
    if (file == NULL) {
        printf("Oops! Something went wrong while saving the file.\n");
        return;
    }

    fwrite(employees, sizeof(struct Employee), count, file);
    fclose(file);
    printf("Employee information has been saved!\n");
}

float calculate_total_salary() {
    FILE *file = fopen("employees.dat", "rb");
    if (file == NULL) {
        printf("Oops! We couldn't find the file.\n");
        return 0;
    }

    float total_salary = 0;
    struct Employee emp;
    while (fread(&emp, sizeof(struct Employee), 1, file)) {
        total_salary += emp.salary;
    }

    fclose(file);
    return total_salary;
}

void show_employee_info() {
    FILE *file = fopen("employees.dat", "rb");
    if (file == NULL) {
        printf("Oops! We couldn't find the file.\n");
        return;
    }

    printf("Here are all the employees:\n");
    struct Employee emp;
    while (fread(&emp, sizeof(struct Employee), 1, file)) {
        printf("Name: %s, ID: %d, Salary: %.2f\n", emp.name, emp.id, emp.salary);
    }

    fclose(file);
}

int main() {
    struct Employee employees[] = {
        {"John", 1, 50000.00},
        {"Jane", 2, 60000.00},
        {"Alice", 3, 55000.00},
        {"Bob", 4, 45000.00}
    };

    int num_employees = sizeof(employees) / sizeof(employees[0]);

    save_employee_info(employees, num_employees);

    show_employee_info();

    float total_salary = calculate_total_salary();
    printf("Total Salary Expense: %.2f\n", total_salary);

    return 0;
}
