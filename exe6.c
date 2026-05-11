//Fazer um programa que imprime a tabela ASCII (código decimal, código hexa, caracter) para os códigos de 0 a 127.

#include <stdio.h>

int main(){
    printf("Decimal | Hexadecimal | Caracter\n");
    printf("----------------------------------\n");

    for(int i=0;i<127;i++){
        printf("%d\t%x\t%c\n", i,i,i);
    }

    return 0;
}
