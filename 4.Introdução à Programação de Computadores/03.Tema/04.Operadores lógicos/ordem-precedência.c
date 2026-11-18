#include <stdio.h>

int main(){
    int a = 5, b = -10, c = 1;

    //a > b = Verdadeiro
    //b < 0 = Verdadeiro
    //Verdadeiro + Verdadeiro = Verdadeiro
    //Verdadeiro || c == 0
    //Verdadeiro || Falso = Verdadeiro
    
    if (a > 0 && b < 0 || c == 0){
        printf("Verdadeiro\n");
    }
    else{
        printf("Falso\n");
    }

    return 0;
}