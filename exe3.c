// Fazer um programa em C que pede um número e exibe sua tabuada de multiplicação

#include <stdio.h>

void tabuada(int numero);

int main(){
    int num;
    printf("Digite o numero do qual deseja ver a tabuada: ");
    scanf("%i", &num);

    tabuada(num);

    return 0;
}

void tabuada(int numero){
    printf("Tabuada do %i:\n");
    for(int i=1;i<=10;i++){
        printf("%i x %i = %i\n", numero, i, numero*i);
    }
}