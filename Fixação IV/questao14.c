#include <stdio.h>

int main(void) {
    float num1, num2, num3, first, second, third;

    printf("Insira 3 valores numéricos reais distintos: "); 
    scanf("%f%f%f", &num1, &num2, &num3); //Leitura dos números

    // Árvore de condicionais para comparar valores
    if(num1 > num2 && num1 > num3) { // Compara a partir de num1 como maior 
        third = num1;                
        if(num2 > num3) {
            second = num2;
            first = num3;
        } else {
            second = num3;
            first = num2;
        }
    }else if(num2 > num1 && num2 > num3) { // Compara a partir de num2 como maior 
        third = num2;
        if(num1 > num3) {
            second = num1;
            first = num3;
        } else {
            second = num3;
            first = num1;
        }
    }else if(num3 > num1 && num3 > num2) { // Compara a partir de num3 como maior 
        third = num3;
        if(num1 > num2) {
            second = num1;
            first = num2;
        } else {
            second = num2;
            first = num1;
        }
    } else {
        printf("Inserção de númros inválidos");
        return 0; // Caso com números inválidos
    }

    printf("Números ordenados: %g %g %g\n", first, second, third); // Exibição ordem crescente

    return 0;
}
