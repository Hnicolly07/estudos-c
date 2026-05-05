// Faça um programa que lê dois valores e imprime:
// - se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
// - se o segundo valor for menor que o primeiro a lista de valores do segundo até o primeiro em ordem decrescente;
// - se ambos forem iguais a mensagem "valores iguais".

#include <stdio.h>

int main(){
    int nums[2];

    for(int i = 0; i < 2; i++){
        printf("Numero %i: ", i+1);
        scanf("%i", &nums[i]);
    }
    // primeiro menor que segundo
    if(nums[0] < nums[1]){
        printf("Valores de %i a %i:\n", nums[0], nums[1]);

        for(int i = nums[0] + 1; i < nums[1]; i++){
            printf("%i ", i);
        }
    } // segundo menor que primeiro mostrar em ordem decrescente
    else if(nums[1] < nums[0]){
        printf("Valores de %i a %i (decrescente):\n", nums[1], nums[0]);

        for(int i = nums[0] - 1; i > nums[1]; i--){
            printf("%i ", i);
        }
    }
    else{
        printf("Valores iguais!");
    }

    return 0;
}
