#include <stdio.h>

int main()
{
    int i;
    int input;

    printf("Enter how many inputs you need: ");
    scanf("%d", &input);

    int num[input];
	
    
    for (i = 0; i < input; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("\n%d", &num[i]);
    }
    
    int max = num[0];
    
    for (i=0 ; i < input ; i++)
    {
        if(num[i]>max)
        {
            max = num[i];
        }
    }

    int countarr[max+1];
    for (i = 0; i <= max; i++)
    {
       countarr[i] = 0;
    }
    
    for (i = 0; i < input; i++)
    {
       countarr[num[i]] +=1;
    }
    
    printf("Numbers ocurring more than once: ");
    for (i = 0; i <= max; i++)
    {
       if(countarr[i] > 1)
       {
       		printf("%d. ", i);
       }
    }

    return 0;
}
