#include <stdio.h>

int main(){
    int numero;
    do{
        printf("Digite um numero par para sair: ");
        scanf("%d", &numero);

        if(numero % 2 == 0 && numero != 0){
            printf("%d - Par: Sucesso!\n", numero);
        }
        else{
            printf("%d - Impar: Tente novamente :/\n", numero);
        }
    }
    while(numero % 2 != 0);

    printf("Saindo do programa...");

    return 0;
}