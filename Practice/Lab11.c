#include <stdio.h>
#include <string.h>

// Employee structure
struct Employee {
    char name[20];
    int employeeID;
    float salary;  // Changed to float to match salary type
};

// Department structure containing multiple employees
struct Department {
    int numEmployees;
    char departmentName[100];
    struct Employee employees[20];  // Array to hold employee details
};

// Function to calculate total salary of all employees in a department
float calculateTotalSalary(struct Department dept) {
    float totalSalary = 0.0;
    for (int i = 0; i < dept.numEmployees; i++) {
        totalSalary += dept.employees[i].salary;
    }
    return totalSalary;
}

int main() {
    struct Department dept;

    // Input department name
    printf("Enter department name: ");
    fgets(dept.departmentName, sizeof(dept.departmentName), stdin);

    // Remove newline character from department name
    dept.departmentName[strcspn(dept.departmentName, "\n")] = '\0';

    // Input number of employees in the department
    printf("Enter number of employees in the department: ");
    scanf("%d", &dept.numEmployees);
    getchar();  // To consume the newline character left by scanf

    // Input details for each employee
    for (int i = 0; i < dept.numEmployees; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Name: ");
        fgets(dept.employees[i].name, sizeof(dept.employees[i].name), stdin);

        // Remove newline character from employee name
        dept.employees[i].name[strcspn(dept.employees[i].name, "\n")] = '\0';

        printf("Employee ID: ");
        scanf("%d", &dept.employees[i].employeeID);
        printf("Salary: ");
        scanf("%f", &dept.employees[i].salary);
        getchar();  // To consume the newline character left by scanf
    }

    // Calculate total salary of all employees in the department
    float totalSalary = calculateTotalSalary(dept);

    // Display the total salary of the department
    printf("\nTotal Salary of all employees in the %s department: %.2f\n", dept.departmentName, totalSalary);
    
    return 0;
}
