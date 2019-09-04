#include <stdio.h>

int main(){
    int dia_nasc, mes_nasc, ano_nasc;
    int dia, mes, ano;
    int calc_dia,  calc_mes, calc_ano;

    //printf("Digite sua data de nascimento (soh numeros");
    scanf("%d %d %d", &dia_nasc, &mes_nasc, &ano_nasc);

    //printf("Digite a data de hoje (soh numeros");
    scanf("%d %d %d", &dia, &mes, &ano);

    //erro
    if(dia_nasc > 31 || dia > 31 || dia_nasc <= 0 || dia <= 0){
        printf("data invalida");
    } else if(mes_nasc > 12 || mes > 12 || mes_nasc <= 0 || mes <= 0){
        printf("data invalida");
    } else if(ano_nasc > 9999 || ano > 9999 || ano_nasc < 0 || ano < 0){
        printf("data invalida");
    } else{


        if(dia_nasc < dia){
            calc_dia = 31 - dia - dia_nasc;
        } else{
            calc_dia = dia_nasc - dia + 31;
        }

        if(mes_nasc < mes){
            calc_mes = 12 - mes - mes_nasc;
        } else{
            calc_mes = 12 - mes_nasc - mes;
        }

        if(ano_nasc < ano){
            calc_ano = ano - ano_nasc;
        } else{
            calc_ano = ano_nasc - ano;
        }

        printf("%d %d %d", calc_ano, calc_mes, calc_dia);
    }

    return 0;
}
