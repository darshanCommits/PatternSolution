// 1
// 01
// 010
// 1010
// 10101

#include <stdio.h>

void main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", !((i + j) % 2));
        }
        printf("\n");
    }
}