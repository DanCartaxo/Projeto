#include <stdio.h>

int main() {
    int tamanhoLado, linha, coluna;

    printf("Digite o tamanho do lado do quadrado (entre 1 e 20): ");
    scanf("%d", &tamanhoLado);

    if (tamanhoLado >= 1 && tamanhoLado <= 20) {
        linha = 1;
        do {
            coluna = 1;
            do {
                printf("* ");
                coluna++;
            } while (coluna <= tamanhoLado);
            printf("\n");
            linha++;
        } while (linha <= tamanhoLado);
    } else {
        printf("Tamanho do lado inválido. Por favor, digite um valor entre 1 e 20.\n");
    }

    return 0;
}

