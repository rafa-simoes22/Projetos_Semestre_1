#include <stdio.h>

int main(){
    //Torre - 5 casas para a direita em linha reta
    printf("Torre: em linha reta\n");

    for (int casasTorre = 0; casasTorre < 5; casasTorre++){
        printf("Direita\n");//Direção do movimento
    }

    printf("\n");
    
    //Rainha - 8 casas para a esquerda em linha reta
    int casasRainha = 0;

    printf("Rainha: em linha reta\n");
    
    while (casasRainha < 8){
        printf("Esquerda\n");//Direção do movimento
        casasRainha++;
    }

    printf("\n");

    //Bispo - 5 casas para cima e à direita em diagonal
    int casasBispo = 0;

    printf("Bispo: na diagonal\n");
    
    do{
        printf("Cima, Direita\n");//Direção do movimento
        casasBispo++;
    }
    while (casasBispo < 5);

    printf("\n");

    //Cavalo - 2 casas para cima e 1 casa para à direita em L
    int movimentosCavalo = 1;

    printf("Cavalo: em L\n");

    while (movimentosCavalo--){
        for (int i = 0; i < 2; i++){
            printf("Cima\n");//Direção do movimento - 2 vezes
        }
        printf("Direita\n");//Direção do movimento - 1 vez
    }

    return 0;
}