#include <stdio.h>

int main(){
    int index;

    char * nomesAlunos [3][3]= {
        {"0", "Port: 30", "Mat: 60"},
        {"1", "Port: 50", "Mat: 40"},
        {"2", "Port: 60", "Mat: 20"}
    };

    printf("Listagem de alunos\n");
    printf("Aluno 0\n");
    printf("Aluno 1\n");
    printf("Aluno 2\n");

    printf("Digite o numero do aluno: ");
    scanf("%d", &index);

    printf("Notas do Aluno %s: %s e %s\n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);

    return 0;
}