// Fazer um programa em C que pergunta um valor em metros
// imprime o correspondente em decímetros, centímetros e milímetros.

#include <stdio.h>

int main(){
    float valor_metros; 

    printf("Digite um valor em metros: ");
    scanf("%f", &valor_metros);

    printf("%.2fm equivale a %.2fdm, %.2fcm e %.2fmm\n", valor_metros, valor_metros*10, valor_metros*100, valor_metros*1000);

    return 0;
}