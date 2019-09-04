#include <stdio.h>

int main(){
    int n, i, j;

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            if(i<10){
                printf("0%d ", i);
            } else{
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    printf("\n");

    i=1;
    while(i<=n){
        if(i<n){
            for(j=1; j<=i; j++){
                if(i<10){
                    printf("0%d ", i);
                } else{
                    printf("%d ", i);
                }
            }
            printf("\n");
        }

        else if(i==n){
            for(j=1; j<=i; j++){
                if(j<10){
                    printf("0%d ", j);
                } else{
                    printf("%d ", j);
                }
            }
        }
    i++;
    }
    printf("\n");

    return 0;
}
