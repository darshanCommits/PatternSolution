// 1
// 10
// 101
// 1010
// 10101

#include<stdio.h>

void main() {
    for(int i = 1; i <= 5 ; i++){
        for(int j = 1 ; j <= i ; j++) {
            if(j&1==1) printf("1");
            else printf("0");
        }
        printf("\n");
    }
}