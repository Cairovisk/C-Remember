#include <stdio.h>

int main(void) {
    int senha;

    printf("Insira a senha: "); 
    scanf("%d", &senha); //Leitura da senha

    if(senha == 12345) {
        printf("Acesso permitido.\n"); // Mensagem acesso permitido
    }else {
        printf("Acesso negado.\n"); // Mensagem acesso negado
    }
    return 0;
}
