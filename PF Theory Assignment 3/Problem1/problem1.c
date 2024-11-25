#include <stdio.h>
#include <string.h>

struct Employee {
    int employeeCode;
    char employeeName[20];
    int dateOfJoining;
    int monthOfJoining;
    int yearOfJoining;
};

void assign(struct Employee *e) {
    printf("Enter Employee Code: ");
    scanf("%d", &e->employeeCode);
    
    getchar();  

    printf("Enter Employee Name: ");
    fgets(e->employeeName, sizeof(e->employeeName), stdin);
    e->employeeName[strcspn(e->employeeName, "\n")] = '\0';

    printf("Enter Date Of Joining of Employee (DD MM YYYY): ");
    scanf("%d %d %d", &e->dateOfJoining, &e->monthOfJoining, &e->yearOfJoining);
}

void askUser(struct Employee employees[], int n) {
    int date, month, year;
    printf("Enter Today's date (DD MM YYYY): ");
    scanf("%d %d %d", &date, &month, &year);
    
    int count = 0;
    printf("\nEmployees with tenure more than 3 years:\n");

    for (int i = 0; i < n; i++) {
        int tenureInYears = (year - employees[i].yearOfJoining);
        if (month < employees[i].monthOfJoining || (month == employees[i].monthOfJoining && date < employees[i].dateOfJoining)) {
            tenureInYears -= 1;
        }

        if (tenureInYears > 3) {
            printf("\nEmployee Code: %d\n", employees[i].employeeCode);
            printf("Employee Name: %s\n", employees[i].employeeName);
            printf("Date of Joining: %d-%d-%d\n", employees[i].dateOfJoining, employees[i].monthOfJoining, employees[i].yearOfJoining);
            printf("Tenure: %d years\n", tenureInYears);
            count++;
        }
    }
    printf("\nTotal Employees with more than 3 years tenure: %d\n", count);
}

int main() {
    struct Employee employees[4];
    
    for (int i = 0; i < 4; i++) {
        printf("\nEnter details for Employee %d.\n", i + 1);
        assign(&employees[i]);
    }

    askUser(employees, 4);

    return 0;
}
