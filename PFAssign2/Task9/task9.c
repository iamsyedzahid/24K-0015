#include <stdio.h>

int main()
{
    char grid[5][5] = {
                        {' ', ' ', 'I', 'X', ' '},
                        {' ', 'X', ' ', ' ', ' '},
                        {'I', ' ', 'X', 'X', ' '},
                        {' ', ' ', ' ', 'I', 'X'},
                        {' ', 'X', ' ', ' ', 'P'}
                    };

    char input[8] = {'w','W', 'a', 'A', 's', 'S', 'd', 'D'};
    int x = 0, y = 0, plyrPosX = 4, plyrPosY = 4;
    char userinput;

    while (1)
    {
        printf("Enter a valid input ([W/w is up, A/a is left, S/s is down, D/d is right]) \n(and 0 to EXIT): ");
        scanf(" %c", &userinput);

        //Exiting condition
        if (userinput == '0')
        {
            printf("You have exited the game.\n");
            break;
        }

        int y = plyrPosY;
        int x = plyrPosX;

        // Determine new position based on input
        if (userinput == 'W' || userinput == 'w') y--;     //Moving up

        else if (userinput == 'S' || userinput == 's') y++; //Moving down
        
        else if (userinput == 'A' || userinput == 'a') x--; //Moving left
        
        else if (userinput == 'D' || userinput == 'd') x++; //Movinf right
        
        else
        {
            printf("Invalid Input Entered.\n");
            continue; //taking input again 
        }

        //Checking for going out of grid, hitting obstacles and collecting items
        if (x < 0 || x >= 5 || y < 0 || y >= 5)
        {
            printf("\n\nYou cannot move outside the grid.\n");
            continue;
        }
        else if (grid[y][x] == 'X')
        {
            printf("\n\nYou have hit the obstacle.\n\n");
            continue;
        }
        else if (grid[y][x] == 'I')
        {
            printf("\n\nYou have collected the item.\n\n");
        }

        //Moving player to the new position
        grid[plyrPosY][plyrPosX] = ' '; //Clearing the old position
        plyrPosX = x;
        plyrPosY = y;
        grid[plyrPosY][plyrPosX] = 'P'; //Placing player in new position

        //Printing output grid
        printf("\nUpdated grid:\n");
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("%c ", grid[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
