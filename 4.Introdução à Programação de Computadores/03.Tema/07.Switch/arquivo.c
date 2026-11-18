#include <stdio.h>

int main(){
    int variavel;

    printf("Digite um valor: ");
    scanf("%d", &variavel);
    
    switch(variavel){
        case 1:
            //codigo a ser executado se a variável == 1
            printf("Valor 1\n");
        break;
        case 2:
            //codigo a ser executado se a variável == 2
            printf("Valor 2\n");
        break;
        default:
            //codigo a ser executado se nenhum dos casos acima for verdadeiro
            printf("O valor nao e 1 ou 2\n");
        break;
    }
    
    return 0;
}