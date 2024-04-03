#include <stdio.h>

int main(){
    int x, y;
    printf("Digite o valor de X, Y: \n");
    scanf("%d %d", &x, &y);

    if(x == 0 && y != 0){
        printf ("Eixo Y");
    }
    else if(x != 0 && y == 0){
        printf("Eixo X");
    }
    else if(x > 0 && y > 0){
        
    }
}