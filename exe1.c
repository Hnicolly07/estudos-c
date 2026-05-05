#include <stdio.h>
// Calcular Média Exercicio

typedef struct{
    char nome[20];
    float notas[3];
    float media;
} aluno;

float media(float *notas);

int main(){
    aluno alunos[5];  

    for(int i=0;i<5;i++){
        printf("Digite o nome do %iº aluno: ", i+1);
        scanf("%s", alunos[i].nome);
        for(int j=0;j<3;j++){
            printf("Digite a %iº nota de %s: ", j+1, alunos[i].nome);
            scanf("%f", &alunos[i].notas[j]);
        }
    }

    for(int i=0;i<5;i++){
        float media_aluno = media(alunos[i].notas);
        if(media_aluno>=7 && media_aluno<=10){
            printf("%s foi aprovado!\n", alunos[i].nome);
        }
        else if(media_aluno<7 && media_aluno>=5){
            printf("%s está em recuperação!\n", alunos[i].nome);
        }
        else{
            printf("%s foi reprovado!", alunos[i].nome);
        }
    }

    return 0;

}

float media(float *notas){
    float soma = 0;
    for(int i=0;i<3;i++){
        soma += notas[i];
    }
    return soma/3;
}