#include <stdio.h>

int main(){
    int n, i;

    scanf("%d", &n);

    while((n != EOF)){
        i++;
        if(n=="\n"){
            break;
        }
        scanf("%d", &n);
    }

    printf("%d", i);
    return 0;
}
