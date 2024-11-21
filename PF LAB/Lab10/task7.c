#include <stdio.h>

#define MAX_TEMP 40

void check_temperature(float temp)
{
    static int count = 0;
    if (temp > MAX_TEMP) count++;
    printf("Temperature: %.1f, Exceeded limit: %d times\n", temp, count);
}

int main()
{
    check_temperature(42);
    check_temperature(38);
    check_temperature(45);
    return 0;
}
