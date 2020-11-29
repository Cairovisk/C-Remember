#include <stdio.h>
#include <stdlib.h>

int numRandom(), lin = 5, col = 4;
int main(void) {
    int soma[50][50], lista[50][50], somaVendedor, i, j;

    for (i = 0 ; i < lin; i++){
        for (j = 0; j < col; j++){
            int num = numRandom();
            printf("%d   ", num);
            soma[i][j] += num;
            lista[i][j]=num;
        }
        printf("\n\n");
    }

    printf("\n");

    somaVendedor = 0;

    printf("O primeiro vendedor vendeu: ");

    for (j = 0; j < col; j++){
        somaVendedor += lista[0][j];
    }
    printf("%d\n", somaVendedor);

    somaVendedor = 0;

    printf("O segundo vendedor vendeu: ");

    for (j = 0; j < col; j++){
        somaVendedor += lista[1][j];
    }
    printf("%d\n", somaVendedor);

    somaVendedor = 0;

    printf("O terceiro vendedor vendeu: ");
    for (j = 0; j < col; j++){
        somaVendedor += lista[2][j];
    }
    printf("%d\n", somaVendedor);

    somaVendedor = 0;

    printf("O quarto vendedor vendeu: ");
    for (j = 0; j < col; j++){
    somaVendedor += lista[3][j];
    }
    printf("%d\n", somaVendedor);

    somaVendedor = 0;

    printf("O quinto vendedor vendeu: ");
    for (j = 0; j < col; j++){
        somaVendedor += lista[4][j];
    }
    printf("%d\n", somaVendedor);
}

int numRandom() {
  int num = (rand() % 10); 
  return num;
}
