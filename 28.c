#include<stdio.h>

// 1
// 24
// 135
// 2468
// 13579

void main() {
    for (int i = 1; i <= 5; i++) {
        for(int j = 1; j <= (i*2); j++) {  
            if(!(i&1) && !(j&1)) printf("%d", j);
            if(i&1 && j&1) printf("%d", j);
        }
        printf("\n");
    }
}