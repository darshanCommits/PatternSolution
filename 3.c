#include<stdio.h>

void main() {
    for (int i = 1; i <= 5 ; i++)
    {
       for(int j = 1 ; j <= 5 ; j++){
        if(j&1==1) printf("0");
        else printf("1");
       }
       printf("\n");
    }
    
}