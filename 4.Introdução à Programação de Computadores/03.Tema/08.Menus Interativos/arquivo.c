#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int opcao, numero_secreto, palpite;

    printf("Menu Principal\n");
    printf("1 - Iniciar\n");
    printf("2 - Ver regras\n");
    printf("3 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            srand(time(0));
            numero_secreto = rand() % 10;

            printf("Digite um numero entr 0 e 9: ");
            scanf("%d", &palpite);

            if(numero_secreto == palpite){
                printf("Voce acertou!\n");
                printf("Numero secreto: %d\n", numero_secreto);
            }
            else{
                printf("Voce errou, tente novamente!\n");
                printf("Numero secreto: %d\n", numero_secreto);
            }
        break;
        case 2:
            printf("Regras do Jogo");
        break;
        case 3:
            printf("Finalizacao do Jogo");
        break;
        default:
            printf("Escolha uma opcao valida");
        break;
    }
    
    return 0;
}