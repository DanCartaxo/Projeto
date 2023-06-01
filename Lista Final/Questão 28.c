#include <stdio.h>

int main() {
    int idade, faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0;
    float peso, media1 = 0, media2 = 0, media3 = 0, media4 = 0;

    int i = 1;
    do {
        printf("Informe a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        printf("Informe o peso da pessoa %d: ", i);
        scanf("%f", &peso);

        if (idade >= 1 && idade <= 10) {
            media1 = (media1 * faixa1 + peso) / (faixa1 + 1);
            faixa1++;
        } else if (idade >= 11 && idade <= 20) {
            media2 = (media2 * faixa2 + peso) / (faixa2 + 1);
            faixa2++;
        } else if (idade >= 21 && idade <= 30) {
            media3 = (media3 * faixa3 + peso) / (faixa3 + 1);
            faixa3++;
        } else {
            media4 = (media4 * faixa4 + peso) / (faixa4 + 1);
            faixa4++;
        }

        i++;
    } while (i <= 15);

    printf("\nMédias de peso por faixa etária:\n");
    printf("1 a 10 anos: %.2f\n", media1);
    printf("11 a 20 anos: %.2f\n", media2);
    printf("21 a 30 anos: %.2f\n", media3);
    printf("Acima de 30 anos: %.2f\n", media4);

    printf("\nQuantidade de pessoas por faixa etária:\n");
    printf("1 a 10 anos: %d\n", faixa1);
    printf("11 a 20 anos: %d\n", faixa2);
    printf("21 a 30 anos: %d\n", faixa3);
    printf("Acima de 30 anos: %d\n", faixa4);

    return 0;
}

