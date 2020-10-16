#include <stdio.h>

int main(void) {
    int opcao;

    do{
        printf("Escolha uma das opções abaixo\n");
        printf("1. Soma\n"); 
        printf("2. Multiplicação\n"); 
        printf("3. Finalizar\n");
        printf("Insira a opção: ");  
        scanf("%d", &opcao); //Leitura da opção de operação

        switch (opcao) {
            case 1: 
            printf("O funcionário possui o cargo de Escrituário e percentual de aumento de 50%%.");
            break;

            case 2: 
            printf("O funcionário possui o cargo de Secretário e percentual de aumento de 35%%.");
            break;

            default: printf("Código inválido.");
        } 
        } while(opcao != 3);

    return 0;
}
