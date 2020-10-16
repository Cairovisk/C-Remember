#include <stdio.h>

int main(void) {
    int idade, codigo;
    char risco;

    printf("Insira a idade da pessoa: ");
    scanf("%d", &idade);
    printf("Insira o código do grupo de risco da pessoa(b: baixo, m: médio e a: alto): ");
    scanf(" %c", &risco);

    if(idade >= 18 && idade <= 24) {
        switch (risco) {
            case 'b':
            codigo = 7;
            break;

            case 'm':
            codigo = 8;
            break;

            case 'a':
            codigo = 9;
            break;

            default: printf("Código de risco inválido");
        } 
    } else if(idade >= 25 && idade <= 40) {
        switch (risco) {
            case 'b':
            codigo = 4;
            break;

            case 'm':
            codigo = 5;
            break;

            case 'a':
            codigo = 6;
            break;

            default: printf("Código de risco inválido");
        }
    } else if(idade >= 41 && idade <= 70) {
        switch (risco) {
            case 'b':
            codigo = 1;
            break;

            case 'm':
            codigo = 2;
            break;

            case 'a':
            codigo = 3;
            break;

            default: printf("Código de risco inválido");
        }
    } else {
        printf("A idade informada não se enquadra nos requisitos da seguradora.\n");
        return 0;
    }

    printf("O código do seguro é %d\n", codigo);
    return 0;
}
