#include <stdio.h>

void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || i == 5 || j == i)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
}