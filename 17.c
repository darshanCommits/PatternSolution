#include <stdio.h>

void main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j < 2 * i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}