#include <stdio.h>

int main(void) {
    float trabalho, avaliacao, exame, media;

    printf("Insira a nota do trabalho de laboratório: "); 
    scanf("%f", &trabalho); //Leitura da nota do trabalho de laboratório
    printf("Insira a nota da avaliação semestral: ");  
    scanf("%f", &avaliacao); //Leitura da avaliação semestral
    printf("Insira a nota do exame final: ");
    scanf("%f", &exame); //Leitura do exame final

    media = ((trabalho * 2) + (avaliacao * 3) + (exame * 5))/10; // Cálculo da média ponderada das notas

    if(media >= 8.0 && media <= 10.0) {
        printf("A média final do aluno é %g e seu conceito é A", media); // Exibição do aluno com conceito A
    }else if(media >= 7.0 && media < 8.0) {
        printf("A média final do aluno é %g e seu conceito é B", media); // Exibição do aluno com conceito B
    }else if(media >= 6.0 && media < 7.0) {
        printf("A média final do aluno é %g e seu conceito é C", media); // Exibição do aluno com conceito C
    }else if(media >= 5.0 && media < 6.0) {
        printf("A média final do aluno é %g e seu conceito é D", media); // Exibição do aluno com conceito D 
    }else if(media < 5.0) {
        printf("A média final do aluno é %g e seu conceito é E", media); // Exibição do aluno com conceito E 
    } 

    return 0;
}
