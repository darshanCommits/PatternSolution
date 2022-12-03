#include<stdio.h>

void main() {
    for(int i = 5 ; i >= 1 ; i--) {
        int temp = i ;
        for(int j = temp; j <= (temp+(i-1)) ; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}