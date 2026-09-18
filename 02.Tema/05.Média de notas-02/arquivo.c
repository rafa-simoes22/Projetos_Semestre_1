#include <stdio.h>

int main(){
    float /*int*/n1, n2, n3, soma;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f"/*"%d"*/, &n1);
    
    printf("Digite a segunda nota: ");
    scanf("%f"/*"%d"*/, &n2);

    printf("Digite a terceira nota: ");
    scanf("%f"/*"%d"*/, &n3);
    
    soma = /*(float)*/n1 + n2 + n3;
    media = soma / 3;

    printf("A media da notas e de: %.1f", media);

    return 0;
}