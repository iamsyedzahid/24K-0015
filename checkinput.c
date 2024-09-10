#include <stdio.h>

int main()
{
    char a;

   
    printf("Enter any character: ");
    scanf("%c", &a);


    
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || 
       a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
    {
        printf("'%c' is Vowel.", a);
    }
    else if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        
        printf("'%c' is Consonant.", a);
    }
    else
    {
    printf("'%c' is not an alphabet.", a);
    }
return 0;
}
