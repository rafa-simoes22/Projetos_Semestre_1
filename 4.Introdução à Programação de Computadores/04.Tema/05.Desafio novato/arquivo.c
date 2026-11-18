#include <stdio.h>

int main(){
    //Torre - 5 casas para a direita em linha reta
    printf("Torre: Linha reta\n");

    for (int casasTorre = 0; casasTorre < 5; casasTorre++){
        printf("Direita\n");//Direção do movimento
    }

    printf("\n");
    
    //Rainha - 8 casas para a esquerda em linha reta
    int casasRainha = 0;

    printf("Rainha: Linha reta\n");
    
    while (casasRainha < 8){
        printf("Esquerda\n");//Direção do movimento
        casasRainha++;
    }

    printf("\n");

    //Bispo - 5 casas para cima e à direita em diagonal
    int casasBispo = 0;

    printf("Bispo: Diagonal\n");
    
    do{
        printf("Cima, Direita\n");//Direção do movimento
        casasBispo++;
    }
    while (casasBispo < 5);

    return 0;
}