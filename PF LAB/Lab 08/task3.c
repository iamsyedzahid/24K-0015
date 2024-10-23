#include <stdio.h>

int main()
{
   int number, i, j;
   
   printf("Enter a  Number: ");
   scanf("%d", &number);
   
   if (number<=0)
   {
       printf("Wrong Input, enter value greater than zero.");
       return -1;
   }
   
   for (i=number ; i > 0; i--)
   {
       if (i%2 != 0)
       {
           printf("%d ", i);
       }
   }
    return 0;
}
