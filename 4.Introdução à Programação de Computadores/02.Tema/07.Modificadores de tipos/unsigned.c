#include <stdio.h>

int main(){
    int numeroSinal = 3000000000; //excede o limine do int normal
    unsigned int numeroSemSinal = 3000000000;

    printf("Numero com sinal: %d\n", numeroSinal);
    printf("Numero sem sinal: %u\n", numeroSemSinal);

    return 0;
}