#include <stdio.h>
int tam1 = 20, tam2 = 30;
int i, j;

void leituraVetorA (int vet_a[tam1]) {
    for(i = 0; i<tam1; i++) {
        printf("Insira o %d˚ número do vetor A: ", i+1);
        scanf("%d", &vet_a[i]);
    }
}
void leituraVetorB (int vet_b[tam2]) {
    for(i = 0; i<tam2; i++) {
        printf("Insira o %d˚ número do vetor B: ", i+1);
        scanf("%d", &vet_b[i]);
    }
}
void montaVetorC (int vet_a[tam1], int vet_b[tam2], int vet_c[tam1 + tam2]) {
    for(i = 0; i<tam1; i++) {
        vet_c[i] = vet_a[i];
    }
    for(int j = tam1, i = 0; i<tam2; j++, i++) {
        vet_c[j] = vet_b[i];
    }
    printf("Vetor C:\n");
    for(i = 0; i<(tam1 + tam2); i++) {
        printf("%d ", vet_c[i]);
    }
    printf("\n");
}
int main(void) {
    int vet_a[tam1], vet_b[tam2], vet_c[tam1 + tam2];

    leituraVetorA(vet_a);
    leituraVetorB(vet_b);
    
    montaVetorC(vet_a, vet_b, vet_c);

    return 0;
}
