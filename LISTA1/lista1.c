#include <stdio.h>

int main(){
    int dia, mes, resto_mes, resto_dias_do_mes, ano, resto_dias;

    printf("Digite seu aniversário em dias: ");
    scanf("%d", &dia);

    if (dia < 30){
        printf("0 ano(s) \n0 mes(es) \n%d dia(s)\n", dia);
    }
    else if (dia >= 30 && dia < 360){
        mes = dia / 30;
        resto_dias = dia % 30;
        printf("0 ano(s) \n%d mes(es) \n%d dia(s)\n", mes, resto_dias);
    }
    else if (dia > 359){
        if(dia > 359 && dia < 365){
            resto_dias_do_mes = ((dia % 365) % 30) + 25;
            printf("0 ano(s) \n11 mes(es) \n%d dia(s)\n", resto_dias_do_mes);
        }
        else{
        mes = dia / 30;
        ano = mes / 12;
        resto_mes = (dia % 365) / 30;
        resto_dias_do_mes = (dia % 365) % 30;
        printf("%d ano(s) \n%d mes(es) \n%d dia(s)\n", ano, resto_mes, resto_dias_do_mes);
        } 
    }

    return 0;
}