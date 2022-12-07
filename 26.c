#include <stdio.h>

void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j < (i * 2) - 2; j = j + 2)
        {
            printf("%d", j);
        }
        for (int j = (i * 2) - 1; j >= 1; j = j - 2)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}