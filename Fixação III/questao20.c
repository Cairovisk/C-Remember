#include <stdio.h>

int main(void) {
    float base, altura, area, perimetro;

    printf("Insira a base e a altura do retângulo: "); 
    scanf("%f%f", &base, &altura); //Leitura dos parâmetros

    // Cálculo de área e perímetro do retângulo
    area = base * altura;
    perimetro = (2 * base) + (2 * altura);

    printf("Área do retângulo: %.2f\n", area); // Exibição da área
    printf("Perímetro do retângulo: %.2f\n", perimetro); // Exibição do perímetro

    return 0;
}
