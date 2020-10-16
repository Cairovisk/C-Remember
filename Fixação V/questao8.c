#include <stdio.h>

int main(void) {
    int codigo;

    printf("Insira o código do funcionário: "); 
    scanf("%d", &codigo); //Leitura do código do funcionário

    switch (codigo) {
        case 1: 
        printf("O funcionário possui o cargo de Escrituário e percentual de aumento de 50%%.");
        break;

        case 2: 
        printf("O funcionário possui o cargo de Secretário e percentual de aumento de 35%%.");
        break;

        case 3: 
        printf("O funcionário possui o cargo de Caixa e percentual de aumento de 20%%.");
        break;

        case 4: 
        printf("O funcionário possui o cargo de Gerente e percentual de aumento de 10%%.");
        break;

        case 5: 
        printf("O funcionário possui o cargo de Diretor e não possui percentual de aumento.");
        break;

        default: printf("Código inválido.");
    } 

    return 0;
}
