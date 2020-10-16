#include <stdio.h>

int main(void) {
    float salario;

    printf("Insira o valor do salário do funcionário: "); 
    scanf("%f", &salario); //Leitura do salário

    if(salario < 500.00) {
        salario = salario * 1.04;// Aumento de 4%
    }else {
        printf("Você não possui direito ao aumento com o salário inserido.\n"); // Mensagem padrão salário inválido
        return 0;
    }

    printf("Salário reajustado: R$ %.2f\n", salario); // Exibição do salário reajustado

    return 0;
}
