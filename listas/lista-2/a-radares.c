#include <stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia){
    int horaA = tA/3600;
    int horaB = tB/3600;

    double horaA2 = (int)horaA;
    double horaB2 = (int)horaB;

    double velMedia = distancia / (horaB2 - horaA2);

    return velMedia;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){

    if(int multa <= )


}

int main(){
    int A, B;
    double dist;

    scanf("%d %d %lf", &A, &B, &dist);

    double velocidade = calculaVelocidadeMedia(A, B, dist);

    printf("%.1lf", velocidade);

}
