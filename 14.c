// 1
// 01
// 010
// 1010
// 10101

#include<stdio.h>

void main() {
    int k = 1;
    for(int i = 1; i <= 5; i++) {
        for(int j = 1 ; j <= i ; j++) {
            if(k&1) printf("1");
            else printf("0");
            k++;
        }
        printf("\n");
    }
}