// Fazer um programa que lê um valor, um operador (+,-,*,/) e outro valor e imprime o resultado da expressão:
// <valor1><operador><valor2>

#include <stdio.h>

int main(){
    int valor1, valor2;
    char operador;

    printf("Digite na seguinte ordem: Valor 1, Operador, Valor 2 ");
    scanf("%i %c %i", &valor1, &operador, &valor2);

    switch (operador)
    {
    case '+':
        printf("Operação: Soma\n");
        printf("%i + %i = %i\n", valor1, valor2, valor1+valor2);
        break;
    case '-':
        printf("Operação: Subtração\n");
        printf("%i - %i = %i\n", valor1, valor2, valor1-valor2);
        break;
    case '*':
        printf("Operação: Multiplicação\n");
        printf("%i x %i = %i\n", valor1, valor2, valor1*valor2);
        break;
    case '/':
        printf("Operação: Divisão\n");
        printf("%i/%i = %i\n", valor1, valor2, valor1/valor2);
        break;
    default:
        printf("Operador Invalido!");
    }

    return 0;

}