#include <stdio.h>
#include <math.h>

int main(){
    int N, c, d, u, potencia;
    printf("Digite um valor para N: \n");
    scanf("%d", &N);

    while ((N < 100 || N > 999))
    {   
        printf("Número Inválido \n");
        scanf("%d", &N);
    }
    int aux = N;

    u = aux % 10;
    aux = aux / 10;
    d = aux % 10;
    aux = aux / 10;
    c = aux;

    u = pow(u, 3);
    d = pow(d, 3);
    c = pow(c, 3);

    potencia = u + d + c;
    if (!(potencia == N))
    {
        printf("O número não satisfaz a relação. ");
    }
    
    printf("O número satisfaz a relação.");

}