#include<stdio.h>

// 1
// 23
// 345
// 4567
// 56789


void main() {
    for(int i = 1; i <= 5 ; i++){
        int temp = i ;
        for(int j = temp ; j <= (temp*2)-1 ; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}