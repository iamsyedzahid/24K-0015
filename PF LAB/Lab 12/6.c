#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file = fopen("file.txt", "r");
    if (!file) {
        printf("Failed to open file.\n");
        return 1;
    }

    char *buffer = NULL, word[100];
    size_t size = 0, bufferSize = 0;
    int wordCount[256] = {0};

    while (fscanf(file, "%s", word) != EOF) {
        size = strlen(word);
        buffer = realloc(buffer, bufferSize + size + 1);
        if (buffer == NULL) {
            printf("Memory allocation failed.\n");
            fclose(file);
            return 1;
        }
        strcpy(buffer + bufferSize, word);
        bufferSize += size + 1;
        wordCount[word[0]]++;
    }

    fclose(file);
    printf("Buffer Contents: %s\n", buffer);
    free(buffer);
    return 0;
}
