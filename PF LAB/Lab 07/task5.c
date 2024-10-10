#include <stdio.h>

int main() {
    int arr[7], min = 0, max = 40, sum = 0;
    float avg;
    int extremeDays[7];
    int extremeCount = 0;

    printf("Enter temperatures for 7 days:\n");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i]; //adding all the temperatures for avergae
    }

    avg = sum / 7.0;

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] < min || arr[i] > max)
        {
            extremeDays[extremeCount] = i + 1; //store the day
            extremeCount++;
        }
    }

    printf("Average Temperature: %.1f°C\n", avg);

    if (extremeCount > 0)
    {
        printf("Extreme temperatures on day(s): ");
        for (int i = 0; i < extremeCount; i++)
        {
            printf("%d, ", extremeDays[i]);
        }
        printf("\n");
    }
    else
    {
        printf("No extreme temperatures recorded.\n");
    }

    return 0;
}
