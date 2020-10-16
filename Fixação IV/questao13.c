#include <stdio.h>

int main(void) {
    float salario, desconto;

    printf("Insira o valor do salário do funcionário: "); 
    scanf("%f", &salario); //Leitura do salário

    // Cálculo do desconto em função do valor do salário
    if(salario < 1000.00) {
        desconto = salario * 0.05;// Desconto de 5%
    }else if(salario >= 1000.00 && salario <= 2000.00) {
        desconto = salario * 0.1; // Desconto de 10%
    }else {
        desconto = salario * 0.15; // Desconto de 15%
    }

    printf("Desconto sobre o salário: R$ %.2f\n", desconto); // Exibição do desconto

    return 0;
}
