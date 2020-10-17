#include <stdio.h>

int main(void) {
    int opcao;

    do{
        float soma = 0, temp = 0, multiplicacao = 1;

        printf("Escolha uma das opções abaixo\n");
        printf("1. Soma\n"); 
        printf("2. Multiplicação\n"); 
        printf("3. Finalizar\n");
        printf("Insira a opção: ");  
        scanf("%d", &opcao); //Leitura da opção de operação
        if(opcao == 1 || opcao == 2) {
            printf("Insira os números para a operação(Digite 0 para executar a operação):\n"); 
            do {
                scanf("%f", &temp); // Leitura das entradas de valor

                if(temp != 0) {

                    switch (opcao) {
                        case 1: 
                        soma += temp; // Caso de soma da opção soma selecionada
                        break;

                        case 2: 
                        multiplicacao *= temp; // Caso de multiplicação  da opção de multiplicação
                        break;

                        default: printf("Opção inválida."); // Exibição padrão de caso inválido
                    } 
                }
            } while (temp != 0); //Condição que termina o ciclo após variável receber 0

            if(opcao == 1) {
                printf("Resultado da operação: %g\n\n", soma); //Exibição do resultado caso seja opção de soma
            } else if(opcao == 2) {
                printf("Resultado da operação: %g\n\n", multiplicacao); //Exibição do resultado caso seja opção de multiplicação
            }
        }
    }while(opcao == 1 || opcao == 2); //Condição para manter o ciclo enquanto a opção selecionada for 2 ou 1 

    return 0;
}
