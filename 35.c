//yet to solve

#include <stdio.h>

void main() {
    for(int i = 5 ; i >= 1 ; i--) {
        for(int j = 1 ; j <= 5 ; j++){
            if(j <= i) printf("*");
            else printf(" ");
        }
        for(int j = 5; j >= i ; j--){
            printf(" ");
        }
        for(int j = 1 ; j <= 5 ; j++){
            if(j <= i) printf("*");
        }
        printf("\n");
    }
    for(int i = 1 ; i <= 5 ; i++) {
        for(int j = 1 ; j <= 5 ; j++){
            if(j <= i) printf("*");
            else printf(" ");
        }
        for(int j = 5; j >= i ; j--){
            printf(" ");
        }
        for(int j = 1 ; j <= 5 ; j++){
            if(j <= i) printf("*");
        }
        printf("\n");
    }
}