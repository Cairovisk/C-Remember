#include <stdio.h>

int main(void) {
    int idade, codigo;
    char risco;

    printf("Insira a idade da pessoa: ");
    scanf("%d", &idade); //Leitura da idade
    printf("Insira o código do grupo de risco da pessoa(b: baixo, m: médio e a: alto): ");
    scanf(" %c", &risco); //Leitura do código do grupo de risco da pessoa

    if(idade >= 18 && idade <= 24) { // Condição para idade >= que 18 e <= que 24
        switch (risco) {
            case 'b':
            codigo = 7; // Caso risco baixo
            break;

            case 'm':
            codigo = 8; // Caso risco médio
            break;

            case 'a':
            codigo = 9; // Caso risco alto
            break;

            default: printf("Código de risco inválido"); // Caso padrão se o caso for inválido
        } 
    } else if(idade >= 25 && idade <= 40) { // Condição para idade >= que 25 e <= que 40
        switch (risco) {
            case 'b':
            codigo = 4; // Caso risco baixo
            break;

            case 'm':
            codigo = 5; // Caso risco médio
            break;

            case 'a':
            codigo = 6; // Caso risco alto
            break;

            default: printf("Código de risco inválido"); // Caso padrão se o caso for inválido
        }
    } else if(idade >= 41 && idade <= 70) { // Condição para idade >= que 41 e <= que 70
        switch (risco) {
            case 'b':
            codigo = 1; // Caso risco baixo
            break;

            case 'm':
            codigo = 2; // Caso risco médio
            break;

            case 'a':
            codigo = 3; // Caso risco alto
            break;

            default: printf("Código de risco inválido"); // Caso padrão se o caso for inválido
        }
    } else {
        printf("A idade informada não se enquadra nos requisitos da seguradora.\n"); // Exibição padrão se a seguradora não cobrir a idade
        return 0;
    }

    printf("O código do seguro é %d\n", codigo); // Exibição do código do seguro
    return 0;
}
