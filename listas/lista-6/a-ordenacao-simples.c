#include <stdio.h>

int main(){
    int i=0, j, k, V[1000], aux=0, tam=0;

    while(scanf("%d", &V[i]) != EOF){
        i++;
        tam++;
    }

    //Bubble Sort
    for(i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            if (V[i] < V[j]){
                aux = V[i];
                V[i] = V[j];
                V[j] = aux;
            }
        }
    }

    //print
    for(k=0; k<tam; k++){
        printf("%d", V[k]);

        if(k!= tam-1){
            printf(" ");
        } else if (k == tam-1){
            printf("\n");
        }
    }
    return 0;
}
