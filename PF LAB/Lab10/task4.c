#include <stdio.h>
#include <string.h>

#define MAX_MOVIES 100

typedef struct
{
    char title[100];
    char genre[50];
    char director[50];
    int release_year;
    float rating;
} Movie;

void add_movie(Movie movies[], int *num_movies)
{
    printf("Enter Movie Title: ");
    scanf(" %[^\n]", movies[*num_movies].title);
    printf("Enter Genre: ");
    scanf(" %[^\n]", movies[*num_movies].genre);
    printf("Enter Director: ");
    scanf(" %[^\n]", movies[*num_movies].director);
    printf("Enter Release Year: ");
    scanf("%d", &movies[*num_movies].release_year);
    printf("Enter Rating: ");
    scanf("%f", &movies[*num_movies].rating);
    (*num_movies)++;
    printf("Movie added successfully!\n");
}

void display_movies(Movie movies[], int num_movies)
{
    for (int i = 0; i < num_movies; i++)
      {
        printf("Title: %s\n", movies[i].title);
        printf("Genre: %s\n", movies[i].genre);
        printf("Director: %s\n", movies[i].director);
        printf("Release Year: %d\n", movies[i].release_year);
        printf("Rating: %.1f\n\n", movies[i].rating);
    }
}

void search_movies_by_genre(Movie movies[], int num_movies)
{
    char genre[50];
    printf("Enter Genre to Search: ");
    scanf(" %[^\n]", genre);

    printf("Movies in Genre '%s':\n", genre);
    for (int i = 0; i < num_movies; i++)
      {
        if (strcmp(movies[i].genre, genre) == 0)
        {
            printf("Title: %s\n", movies[i].title);
            printf("Director: %s\n", movies[i].director);
            printf("Release Year: %d\n", movies[i].release_year);
            printf("Rating: %.1f\n\n", movies[i].rating);
        }
    }
}

int main()
{
    Movie movies[MAX_MOVIES];
    int num_movies = 0;
    int choice;

    while (1)
      {
        printf("\n1. Add Movie\n2. Display All Movies\n3. Search Movies by Genre\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            if (num_movies < MAX_MOVIES)
            {
                add_movie(movies, &num_movies);
            }
            else
            {
                printf("Maximum number of movies reached.\n");
            }
        }
        else if (choice == 2)
        {
            display_movies(movies, num_movies);
        }
        else if (choice == 3)
        {
            search_movies_by_genre(movies, num_movies);
        }
        else if (choice == 4)
        {
            break;
        }
        else
        {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
