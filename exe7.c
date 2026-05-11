// Fazer um programa em "C" que lê o preço de um produto
// inflaciona esse preço em 10% se ele for menor que 100 
// e em 20% se ele for maior ou igual a 100.

#include <stdio.h>

int main(){
    float preco;
    printf("Preço: ");
    scanf("%f", &preco);

    float preco_aumento = preco + (preco * 0.1 *(preco<100)) + (preco * 0.2 *(preco>=100));
    printf("\nPreço sem inflação: %.2f\n", preco);
    printf("Preço inflacionado: %.2f", preco_aumento);

    return 0;
}