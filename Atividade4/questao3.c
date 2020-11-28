#include <stdio.h>
#include <stdlib.h>

void somaDiagonal (void) { // Método que soma a diagonal de uma matriz 10 e a imprimi
    const int lin = 10, col = 10;
    int matriz[lin][col] = { 29, 81, 37, 52, 14, 53, 71, 93, 5, 3, 49, 
    54, 24, 94, 15, 39, 17, 80, 44, 55, 58, 16, 51, 27, 25, 21, 38, 7, 
    35, 11, 8, 68, 97, 33, 34, 13, 87, 10, 63, 1, 84, 76, 98, 42, 88, 92, 
    83, 50, 43, 20, 96, 4, 86, 23, 36, 82, 69, 61, 6, 18, 56, 31, 91, 100, 
    47, 12, 2, 62, 64, 75, 19, 45, 74, 48, 73, 90, 32, 9, 77, 66, 41, 60, 
    30, 85, 40, 70, 89, 99, 79, 95, 26, 67, 46, 78, 28, 65, 72, 22, 59, 57 },
    soma = 0;
    
    for(int i = 0; i < lin; i++) { // Loop que define as linhas
        for(int j = 0; j < col; j++) { // Loop que define as colunas
            if(i == j) {
                soma += matriz[i][j];
            }
        }
    }
    printf("Soma da diagonal de uma matriz 10x10: %d\n", soma);
}

int main(void) {

    somaDiagonal(); // Chamada do método imprimiMatriz

    return 0;
}
