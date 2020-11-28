#include <stdio.h>

void ordenaCrescente (int *val1, int *val2, int *val3) { //método que ordena os 3 números
    int temp1, temp2, temp3;
    if(*val1 > *val2) { //Lógica que compara se valor1 > valor2
        temp1 = *val2;
        *val2 = *val1;
        *val1 = temp1;
    }
    if(*val1 > *val3) { //Lógica que compara se valor1 > valor3
        temp2 = *val3;
        *val3 = *val1;
        *val1 = temp2;
    }
    if(*val2 > *val3) { //Lógica que compara se valor2 > valor3
        temp3 = *val2;
        *val2 = *val3;
        *val3 = temp3;
    }
}

void imprimiCrescente (int num1,int num2, int num3) { // método que exibe os números ordenados
    printf("Números em ordem crescente: %d %d %d\n", num1, num2, num3);
}

int main(void) {
    int num1, num2, num3;

    printf("Digite os 3 números: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    ordenaCrescente(&num1, &num2, &num3); // Chamada do método que ordena os números

    imprimiCrescente(num1,num2, num3); // Chamada do método que exibe os números ordenados

    return 0;
}
