#include <stdio.h>
#include <stdlib.h>

const int lin = 4, col = 3;

void comparaMatriz (int matrizA[lin][col], int matrizB[lin][col]) { // Método que compara duas matrizes 4x3

    int matrizC[lin][col];
    printf("Matriz verdade: \n");
    for(int i = 0; i < lin; i++) { // Loop que define as linhas
        for(int j = 0; j < col; j++) { // Loop que define as colunas
            if(matrizA[i][j] == matrizB[i][j]) { // Compara cada elemento na posição ixj
                matrizC[i][j] = 1;
            } else {
                matrizC[i][j] = 0;
            }
        }
    }
    for(int i = 0; i < lin; i++) { // Loop que exibe as linhas
        for(int j = 0; j < col; j++) { // Loop que exibe as colunas
        printf("%d\t", matrizC[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(void) {
    int matrizA[lin][col] = {  2, 81, 37, 52, 14, 53, 71, 93, 5, 3, 49, 
    54 }, matrizB[lin][col] = { 29, 81, 37, 52, 14, 53, 71, 93, 5, 3, 49, 
    5 };
    

    comparaMatriz(matrizA, matrizB); // Chamada do método comparaMatriz

    return 0;
}
