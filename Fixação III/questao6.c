#include <stdio.h>

int main(void) {
    int num1, num2, temp;
    printf("Digite dois valores inteiros:\n"); 
    scanf("%d %d", &num1, &num2); //Leitura dos dois valores

    temp = num1;
    printf("Valores iniciais: %d %d\n", num1, num2); //Exibição dos valores inseridos

    num1 = num2; //Troca dos valores por variável temporária
    num2 = temp;
    printf("Valores trocados: %d %d\n", num1, num2); //Exibição dos valores trocados
    return 0;
}
