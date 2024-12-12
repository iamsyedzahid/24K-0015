#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* ratings;
    int totalScore;
} Employee;

void inputEmployees(Employee* employees, int numEmployees, int numPeriods)
{
    for (int i = 0; i < numEmployees; i++)
      {
        employees[i].ratings = (int*)malloc(numPeriods * sizeof(int));
        employees[i].totalScore = 0;
        
        printf("Enter ratings for Employee %d across %d periods:\n", i + 1, numPeriods);
        for (int j = 0; j < numPeriods; j++)
        {
            do {
                printf("Period %d (1-10): ", j + 1);
                scanf("%d", &employees[i].ratings[j]);
            } while (employees[i].ratings[j] < 1 || employees[i].ratings[j] > 10);
            
            employees[i].totalScore += employees[i].ratings[j];
        }
    }
}

void displayPerformance(Employee* employees, int numEmployees, int numPeriods)
{
    printf("\nPerformance Ratings:\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("Employee %d: ", i + 1);
        for (int j = 0; j < numPeriods; j++) {
            printf("%d ", employees[i].ratings[j]);
        }
        printf("Total Score: %d\n", employees[i].totalScore);
    }
}

int findEmployeeOfTheYear(Employee* employees, int numEmployees, int numPeriods)
{
    float highestAvg = 0.0;
    int bestEmployee = -1;
    
    for (int i = 0; i < numEmployees; i++)
    {
        float avgScore = (float)employees[i].totalScore / numPeriods;
        if (avgScore > highestAvg)
        {
            highestAvg = avgScore;
            bestEmployee = i;
        }
    }
    return bestEmployee;
}

int findHighestRatedPeriod(Employee* employees, int numEmployees, int numPeriods)
{
    float highestAvg = 0.0;
    int bestPeriod = -1;
    
    for (int j = 0; j < numPeriods; j++)
    {
        int periodSum = 0;
        for (int i = 0; i < numEmployees; i++)
          {
            periodSum += employees[i].ratings[j];
        }
        float avgPeriod = (float)periodSum / numEmployees;
        if (avgPeriod > highestAvg)
        {
            highestAvg = avgPeriod;
            bestPeriod = j;
        }
    }
    return bestPeriod;
}

int findWorstPerformingEmployee(Employee* employees, int numEmployees, int numPeriods)
{
    float lowestAvg = 10.0;
    int worstEmployee = -1;
    
    for (int i = 0; i < numEmployees; i++)
    {
        float avgScore = (float)employees[i].totalScore / numPeriods;
        if (avgScore < lowestAvg)
        {
            lowestAvg = avgScore;
            worstEmployee = i;
        }
    }
    return worstEmployee;
}

int main()
{
    int numEmployees, numPeriods;
    
    printf("Enter number of employees: ");
    scanf("%d", &numEmployees);
    printf("Enter number of evaluation periods: ");
    scanf("%d", &numPeriods);
    
    Employee* employees = (Employee*)malloc(numEmployees * sizeof(Employee));
    
    inputEmployees(employees, numEmployees, numPeriods);
    displayPerformance(employees, numEmployees, numPeriods);
    
    int employeeOfTheYear = findEmployeeOfTheYear(employees, numEmployees, numPeriods);
    printf("Employee of the Year: Employee %d\n", employeeOfTheYear + 1);
    
    int highestRatedPeriod = findHighestRatedPeriod(employees, numEmployees, numPeriods);
    printf("Highest Rated Period: Period %d\n", highestRatedPeriod + 1);
    
    int worstPerformingEmployee = findWorstPerformingEmployee(employees, numEmployees, numPeriods);
    printf("Worst Performing Employee: Employee %d\n", worstPerformingEmployee + 1);
    
    for (int i = 0; i < numEmployees; i++) 
    {
        free(employees[i].ratings);
    }
    free(employees);
    
    return 0;
}
