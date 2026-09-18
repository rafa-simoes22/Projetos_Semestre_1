#include <stdio.h>

void moverTorre(int casas){
    if(casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas){
    if(casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

void moverBispo(int casas){
    if(casas > 0){
        for(int vertical = 0; vertical < 1; vertical++){
            for(int horizontal = 0; horizontal < 1; horizontal++){
                printf("Cima\n");
                printf("Direita\n");
            }
        }
        moverBispo(casas - 1);
    }
}

int main(){
    //Torre - 5 casas para a direita em linha reta
    printf("Torre: em linha reta\n");
    moverTorre(5);

    printf("\n");
    
    //Rainha - 8 casas para a esquerda em linha reta
    printf("Rainha: em linha reta\n");
    moverRainha(8);

    printf("\n");

    //Bispo - 5 casas para cima e à direita em diagonal
    printf("Bispo: na diagonal\n");
    moverBispo(5);
    
    printf("\n");

    //Cavalo - 2 casas para cima e 1 casa para a direita em L
    int movimentosCavalo = 1;

    printf("Cavalo: em L\n");

    while(movimentosCavalo > 0){
        int cima = 0;

        while(cima < 2){
            printf("Cima\n");
            cima++;
        }
        printf("Direita\n");
        movimentosCavalo--;
    }

    return 0;
}