#include <stdio.h>
#include <stdlib.h>

const int numeroAlunos = 40, comprimentoNomes = 20;

void encontraAlunoLetraA () { 
    char alunos[numeroAlunos][comprimentoNomes];
    int contador;
    for(contador = 0; contador < numeroAlunos; contador ++) { // Loop que lê cada nome de aluno
        printf("Digite o nome de um aluno: ");
        gets(alunos[contador]);
    }
    printf("Alunos com inicial A: \n");
    for(int i = 0; i < numeroAlunos; i++) { // Loop que exibe todos os nomes com inicial A
        if(alunos[i][0] == 'A') {
            printf("%s ", alunos[i]);
        }
    }
    printf("\n");
    
}

int main(void) {

    encontraAlunoLetraA(); // Chamada do método encontraPosicaoMaior

    return 0;
}
