#include <stdio.h>
#include <string.h>

struct Employee {
    char name[20];
    int employeeID;
    float salary;
};

struct Department {
    int numEmployees;
    char departmentName[100];
    struct Employee employees[20];
};

float calculateTotalSalary(struct Department dept) {
    float totalSalary = 0.0;
    for (int i = 0; i < dept.numEmployees; i++) {
        totalSalary += dept.employees[i].salary;
    }
    return totalSalary;
}

int main() {
    struct Department dept;

    printf("Enter department name: ");
    fgets(dept.departmentName, sizeof(dept.departmentName), stdin);

    dept.departmentName[strcspn(dept.departmentName, "\n")] = '\0';

    printf("Enter number of employees in the department: ");
    scanf("%d", &dept.numEmployees);
    getchar();  // To consume the newline character left by scanf

    for (int i = 0; i < dept.numEmployees; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Name: ");
        fgets(dept.employees[i].name, sizeof(dept.employees[i].name), stdin);

        dept.employees[i].name[strcspn(dept.employees[i].name, "\n")] = '\0';

        printf("Employee ID: ");
        scanf("%d", &dept.employees[i].employeeID);
        printf("Salary: ");
        scanf("%f", &dept.employees[i].salary);
        getchar();  // To consume the newline character left by scanf
    }

    float totalSalary = calculateTotalSalary(dept);


    printf("\nTotal Salary of all employees in the %s department: %.2f\n", dept.departmentName, totalSalary);
    
    return 0;
}
