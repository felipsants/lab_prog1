#include <stdio.h>

int main(){
    float n1, n2, n3, media_aritimetica;

    printf("Digite as notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    if(n1 < 0 || n2 < 0 || n3 < 0){
        printf("Nota abaixo de 0. \n");
        return 2;
    }
    if(n1 > 10 || n2 > 10 || n3 > 10){
        printf("Nota acima de 10. \n");
        return 2;
    }

    if (n1 > n2 && n3 > n2){
        media_aritimetica = (n1 + n3)/2;
        
    }
    if(n2 > n1 && n3 > n1){
        media_aritimetica = (n2 + n3)/2;
        
    }
    if(n1 > n3 && n2 > n3){
        media_aritimetica = (n1 + n2)/2;
        
    }
    printf("Sua média: %.2f\n", media_aritimetica);
    return 0;
}