#include <stdio.h>

int main(){
    int idade;

    idade = 20;//17

    if (idade >= 18){
        printf("Maior de idade\n");
        printf("Dentro if\n");
    }

    printf("Fora if");

    return 0;
}