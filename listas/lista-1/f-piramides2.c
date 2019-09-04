#include <stdio.h>

int main(){
    int i,c,e,n;

    scanf(" %d", &n);

    for (i = n; i >= 0; i--){
        for(e = 0; e <= i-1;e++){
            printf(" ");
        }

        for (c = 1; c <= n-i; c++){
            printf("*");
        }

        for (c = 0; c <= n-i; c++){
            printf("*");
        }

    printf("\n");
    }
    return 0;
}
