float calculateAverage(int totalScore, int numPeriods) {
    return (float)totalScore / numPeriods;
}

int findEmployeeOfTheYear(Employee* employees, int numEmployees, int numPeriods) {
    float highestAvg = 0.0;
    int bestEmployee = -1;
    
    for (int i = 0; i < numEmployees; i++) {
        float avgScore = calculateAverage(employees[i].totalScore, numPeriods);
        if (avgScore > highestAvg) {
            highestAvg = avgScore;
            bestEmployee = i;
        }
    }
    return bestEmployee;
}

int findWorstPerformingEmployee(Employee* employees, int numEmployees, int numPeriods) {
    float lowestAvg = 10.0;
    int worstEmployee = -1;
    
    for (int i = 0; i < numEmployees; i++) {
        float avgScore = calculateAverage(employees[i].totalScore, numPeriods);
        if (avgScore < lowestAvg) {
            lowestAvg = avgScore;
            worstEmployee = i;
        }
    }
    return worstEmployee;
}
