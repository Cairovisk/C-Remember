#include <stdio.h>

int main(void) {
    float a, b, c, X;

    printf("Insira 3 valores: "); 
    scanf("%f%f%f", &a, &b, &c); //Leitura dos parâmetros

    X = ((a + (2 * b + c) * c) / a * a); // Cálculo da expressão de X

    printf("Valor da expressão com os 3: %.2f\n", X); // Exibição de X

    return 0;
}
