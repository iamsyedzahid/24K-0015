#include <stdio.h>

#define METERS_TO_KM 0.001

float convert_to_km(float meters)
{
    static int call_count = 0;
    call_count++;
    printf("Function called %d times\n", call_count);
    return meters * METERS_TO_KM;
}

int main()
{
    printf("1000 meters = %.3f km\n", convert_to_km(1000));
    printf("500 meters = %.3f km\n", convert_to_km(500));
    return 0;
}
