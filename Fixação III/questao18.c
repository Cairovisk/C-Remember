#include <stdio.h>

int main(void) {
    float peso, engordou;
    int gramas;
    printf("Insira o valor do peso da pessoa: "); 
    scanf("%f", &peso); //Leitura do peso

    gramas = peso*1000; //Cálculo do peso em gramas
    engordou = gramas*1.07; //Cálculo do peso em gramas após engordar 7%

    printf("Peso em gramas: %d gramas\n", gramas); // Exibição do peso em gramas
    printf("Peso em gramas após engordar 7%%: %.2f gramas\n", engordou); //Exibição do peso após engordar 7%
    return 0;
}
