#include <stdio.h>
#include <stdlib.h>

void imprimiMatriz (void) { // Método que monta e imprimi uma matriz identidade 4x4
    const int lin = 4, col = 4;
    int matriz[lin][col];
    printf("Matriz identidade 4x4: \n");
    for(int i = 0; i < lin; i++) { // Loop que define as linhas
        for(int j = 0; j < col; j++) { // Loop que define as colunas
            if(i == j) {
                matriz[i][j] = 1;
                printf("%d", matriz[i][j]);
            } else {
                matriz[i][j] = 0;
                printf("%d", matriz[i][j]);
            }
        }
        printf("\n");
    }
}

int main(void) {

    imprimiMatriz(); // Chamada do método imprimiMatriz

    return 0;
}
