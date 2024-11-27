#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("file.csv", "r");
    
    if (file == NULL)
    {
        perror("Error while opening.");
        return -1 ;
    }
    char line[100];
    while (fgets(line, sizeof(line), file))
    {
        printf("%s\n", line);
    }

    // fprintf(file, "Hello Meow.");
    
    fclose(file);
    printf("File read successfully.");
    return 0;
}
