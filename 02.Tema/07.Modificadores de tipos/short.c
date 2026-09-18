#include <stdio.h>

int main(){
    short int numeroPequeno = 32767; // valor máximo short int
    printf("Numero pequeno (short int): %d\n", numeroPequeno);

    numeroPequeno = 32768; // excedeu o valor máximo short int
    printf("Numero pequeno atualizado (short int): %d\n", numeroPequeno);
    
    printf("\n*** Tamanho das variaveis ***\n");
    printf("Short int: %lu bytes - int: %lu bytes - long int: %lu bytes\n", sizeof(short int), sizeof(int), sizeof(long int));
    printf("Float: %lu bytes - Double: %lu bytes - long double: %lu bytes\n", sizeof(float), sizeof(double), sizeof(long double));

    return 0;
}