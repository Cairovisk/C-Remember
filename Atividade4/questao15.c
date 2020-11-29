#include <stdio.h>
#include <stdlib.h>

const int lin = 5, col = 4;

void manipulaMatriz (void) { // Método que lê e manipula a matriz

    int matrizProdutos[lin][col];

    for(int i = 0; i < lin; i++) { // Loop que define as linhas
        for(int j = 0; j < col; j++) { // Loop que define as colunas
        printf("Insira o estoque do produto %d no armazém %d: ", i + 1, j + 1);
        scanf("%d", &matrizProdutos[i][j]); // Leitura de cada elemento na posição ixj
        }
        printf("\n");
    }


    for(int i = 0; i < lin; i++) { // Loop linhas

        int quantidadeEstoque = 0;
        for(int j = 0; j < col; j++) { // Loop colunas
            quantidadeEstoque += matrizProdutos[i][j];
        }
        printf("Quantidade de itens no armazém %d: ", i + 1);
        printf("%d\n", quantidadeEstoque);
    }
    printf("\n");
}

int main(void) {
    
    manipulaMatriz(); // Chamada do método manipulaMatriz

    return 0;
}
