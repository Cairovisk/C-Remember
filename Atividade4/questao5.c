#include <stdio.h>
#include <stdlib.h>

const int lin = 10, col = 5;

void encontraPosicaoMaior (int m[lin][col]) { // Método que encontra o maior número da matriz
    int maior = m[0][0], maiorX, maiorY;
    
    for(int i = 0; i < lin; i++) { // Loop que define as linhas
        for(int j = 0; j < col; j++) { // Loop que define as colunas
            if(m[i][j] > maior) {
                maior = m[i][j];
                maiorX = i+1;
                maiorY = j+1;
            }
        }
    }
    printf("Linha: %d Coluna: %d\n", maiorX, maiorY); // Exibe a posição do maior número
}

int main(void) {
    int matriz[lin][col] = { 29, 81, 37, 52, 14, 53, 71, 93, 5, 3, 49, 
    54, 24, 94, 15, 39, 17, 80, 44, 55, 58, 16, 51, 27, 25, 21, 38, 7, 
    35, 11, 8, 68, 97, 33, 34, 13, 87, 10, 63, 1, 84, 76, 98, 42, 88, 92, 
    83, 50, 43, 20 };

    encontraPosicaoMaior(matriz); // Chamada do método encontraPosicaoMaior

    return 0;
}
