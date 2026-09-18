#include <stdio.h>

//Defindo o tamanho máximo da matriz
#define LINHAS 5 //valores alteráveis
#define COLUNAS 5 //valores alteráveis

int main(){
    int matriz[LINHAS][COLUNAS];
    int soma = 0;

    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            soma++;
            matriz[i][j] = soma;
            printf("%d ", matriz[i][j]);    
        }
        printf("\n");
    }
    
    return 0;
}