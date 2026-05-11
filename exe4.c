// Fazer um programa que solicita um número decimal e imprime o correspondente em hexa e octal.

#include <stdio.h>

int main(){
    int num;
    printf("Digite um número decimal: ");
    scanf("%i", &num);

    printf("Decimal: %d\n", num);
    printf("Hexadecimal: %#x\n", num);
    printf("Octal: %#o\n", num);

    return 0;
}