#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    printf("Digite sua matricula: ");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s | Matricula: %d | ", nome, matricula);
    printf("Idade: %d | Altura: %f", idade, altura);

    return 0;
}