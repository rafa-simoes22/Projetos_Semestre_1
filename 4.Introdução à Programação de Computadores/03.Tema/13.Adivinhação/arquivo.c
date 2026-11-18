#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int opcao, numero_computador , numero_jogador;

    srand(time(0));
    numero_computador = rand() % 100 + 1;

    printf("Digite um numero de 0 a 100: ");    
    scanf("%d", &numero_jogador);

    printf("Escolhas\n");
    printf("1 - Maior\n");
    printf("2 - Menor\n");
    printf("3 - Igual\n");
    printf("Escolha sua previsao: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            if(numero_jogador > numero_computador){
                printf("Voce acertou!\n");
                printf("Numero gerado: %d\n", numero_computador);
            }
            else{
                printf("Voce errou, tente novamente!\n");
                printf("Numero gerado: %d\n", numero_computador);
            }
        break;
        case 2:
            if(numero_jogador < numero_computador){
                printf("Voce acertou!\n");
                printf("Numero gerado: %d\n", numero_computador);
            }
            else{
                printf("Voce errou, tente novamente!\n");
                printf("Numero gerado: %d\n", numero_computador);
            }
        break;
        case 3:
            if(numero_jogador == numero_computador){
                printf("Voce acertou!\n");
                printf("Numero gerado: %d\n", numero_computador);
            }
            else{
                printf("Voce errou, tente novamente!\n");
                printf("Numero gerado: %d\n", numero_computador);
            }
        break;
        default:
            printf("Escolha uma opcao valida");
        break;
    }
    
    return 0;
}