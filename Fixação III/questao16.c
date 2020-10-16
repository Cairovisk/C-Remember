#include <stdio.h>

int main(void) {
    float salario;
    printf("Insira o valor do salário do funcionário: "); 
    scanf("%f", &salario); //Leitura do salário

    salario = salario*0.05; //Cálculo do Imposto de renda(5%)

    printf("Imposto de renda a ser pago: R$ %.2f\n", salario); //Exibição do imposto
    return 0;
}
