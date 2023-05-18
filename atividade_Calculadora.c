#include <stdio.h>


float soma(float a, float b) {
    return a + b;
}


float subtracao(float a, float b) {
    return a - b;
}


float multiplicacao(float a, float b) {
    return a * b;
}


float divisao(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: divisão por zero.\n");
        return 0;
    }
}

int main() {
    float num1, num2;
    
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    
    printf("Resultado da soma: %.2f\n", soma(num1, num2));
    printf("Resultado da subtração: %.2f\n", subtracao(num1, num2));
    printf("Resultado da multiplicação: %.2f\n", multiplicacao(num1, num2));
    printf("Resultado da divisão: %.2f\n", divisao(num1, num2));
    
    return 0;
}
