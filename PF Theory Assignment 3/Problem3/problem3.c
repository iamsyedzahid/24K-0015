#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validateEmail(char* email) {
    if (email == NULL || strlen(email) == 0) {
        printf("Email is empty!\n");
        return 0;
    }
    
    int atCount = 0; // To count '@' symbols
    int dotAfterAt = 0; // Flag to check if dot exists after '@'
    
    for (int i = 0; email[i] != '\0'; i++)
      {
        if (email[i] == '@')
        {
            atCount++;
        }
        if (atCount == 1 && email[i] == '.')
        {
            dotAfterAt++;
        }
    }
    
    if (atCount == 1 && dotAfterAt == 1)
    {
        return 1; // Valid email
    }
    else 
    {
        printf("Dot or @ error.\n"); 
        return 0;  // Invalid email
    }
}

int main()
{
    char* email;
    int emailLength = 100;

    printf("Enter an email address: ");
    email = (char*)malloc(emailLength * sizeof(char)); // Allocating memory for the email input
    if (email == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    fgets(email, emailLength, stdin);
    
    email[strcspn(email, "\n")] = 0;

    // checking email
    if (validateEmail(email))
    {
        printf("Valid Email.\n");
    }
    else
    {
        printf("Invalid Email.\n");
    }

    free(email);
    
    return 0;
}
