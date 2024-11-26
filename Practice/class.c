#include <stdio.h>
#include <stdlib.h>

int swap(int array[], int length)
{
    // int temp = *ptr;
    // *ptr = *ptr2;
    // *ptr2 = temp;
    // printf("Value after swapping: a = %d AND b = %d\n", *ptr, *ptr2);
    int sum=0;

    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    printf("Sum is %d", sum);
}

int main()
{
//     int a = 7;
//     int b = 5;
//     int *ptr, *ptr2;
//     ptr = &a;
//     ptr2 = &b;
//     printf("Value before swapping: a = %d AND b = %d\n", a, b);
    int array[] = {1,5,10};
    
    int len = sizeof(array)/sizeof(array[0]);

    swap(array, len);
    
    // printf("Value: %d: Address: %d\n", *ptr, ptr);
    
    return 0;
}