#include <stdio.h>

int main() {
    char name[100], email[100], phoneNo[100];


    printf("Enter Your Name: ");
    scanf("%[A-Za-z ]", name);


    // Clear the input buffer again, I USED CHATGPT FOR THIS AS CODE WAS GIVING ERROR.
    fflush(stdin);

    printf("Enter Your Email: ");
    scanf("%[A-Za-z0-9@._-]", email);


    // Clear the input buffer again, I USED CHATGPT FOR THIS AS CODE WAS GIVING ERROR.
    fflush(stdin);


    printf("Enter Your Phone Number: ");
    scanf("%[0-9+ -]", phoneNo);

    printf("\n\n");
    printf("Your Name is: %s\n", name);
    printf("Your Email is: %s\n", email);
    printf("Your Phone No. is: %s\n", phoneNo);

    return 0;
}
