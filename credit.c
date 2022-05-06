#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    //get user input
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    //loop for rows
    for (int i = 1; i < n + 1; i++)
    {


        //loop for left
        for (int j=1; j < n + 1; j++)
        {
            if (i + j > n)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf(" ");
        printf(" ");
        //loop for right
        for (int j=1; j < n + 1; j++)
        {
            if (i>=j)
            {
                printf("#");
            }
           // else
           // {
           //     printf(" ");
           // }
    }
    printf("\n");
    }

}
