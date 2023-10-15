#include <stdio.h>

// 1
// 23
// 345
// 4567
// 56789

void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j < 2 * i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}