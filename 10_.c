#include<stdio.h>


//yet to solve

void main() {
    for(int i = 1 ; i <= 5 ; i++) {
        for(int j = 5 ; j >= i-j ; j--) {
            printf("%d", i);
        }
        printf("\n");
    }
}

