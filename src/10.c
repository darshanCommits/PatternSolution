#include <stdio.h>

// 11111
// 2222
// 333
// 44
// 5

void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 6 - i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}
