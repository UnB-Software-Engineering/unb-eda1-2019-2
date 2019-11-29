#include <stdio.h>

void quick(int vet[], int esq, int dir){
    int pivo = esq, i,ch,j;
    for(i=esq+1;i<=dir;i++){
        j = i;
        if(vet[j] < vet[pivo]){
            ch = vet[j];
            while(j > pivo){
                vet[j] = vet[j-1];
                j--;
            }
            vet[j] = ch;
            pivo++;
        }
    }
    if(pivo-1 >= esq){
        quick(vet,esq,pivo-1);
    }
    if(pivo+1 <= dir){
        quick(vet,pivo+1,dir);
    }
 }

int main(){
    int i=0, j, k, V[1000], aux=0, tam=0;

    scanf("%d", &tam);

    for(i = 0; i < tam; i++){
        scanf("%d", &V[i]);
    }

    quick(V, 0, tam);

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

