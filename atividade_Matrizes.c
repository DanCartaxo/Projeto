#1
#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j;
    
    printf("Digite os elementos da matriz 3x3:\n");
    
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Digite o elemento da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nA matriz digitada é:\n");
    
   
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}





#2
#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main() {
    int matriz[LINHAS][COLUNAS];
    int matrizMultiplicada[LINHAS][COLUNAS];
    int i, j;
    
    printf("Digite os elementos da matriz 3x3:\n");
    
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Digite o elemento da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            matrizMultiplicada[i][j] = matriz[i][j] * 2;
        }
    }
    
    printf("\nA matriz original é:\n");
    
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nA matriz multiplicada por 2 é:\n");
    
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matrizMultiplicada[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}






#3
#include <stdio.h>

#define LINHAS 2
#define COLUNAS 3

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j, soma = 0;
    
    printf("Digite os 6 valores numéricos inteiros da matriz 2x3:\n");
    
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Digite o elemento da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }
    
    printf("\nA matriz digitada é:\n");
    
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nA soma dos 6 números é: %d\n", soma);
    
    return 0;
}





#4
#include <stdio.h>

#define TAMANHO 4

int main() {
    int matriz[TAMANHO][TAMANHO];
    int i, j;
    
    printf("Digite os elementos da matriz 4x4:\n");
    
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("Digite o elemento da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nOs elementos da diagonal principal são:\n");
    
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", matriz[i][i]);
    }
    
    printf("\n");
    
    return 0;
}






#5
#include <stdio.h>

#define TAMANHO 3

int main() {
    int matriz[TAMANHO][TAMANHO];
    int i, j;
    
    printf("Digite os elementos da matriz 3x3:\n");
    
    // Preenche a matriz com valores fornecidos pelo usuário
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("Digite o elemento da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nTodos os elementos da matriz, exceto a diagonal principal, são:\n");
    
    // Imprime todos os elementos, exceto a diagonal principal
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            if (i != j) {
                printf("%d ", matriz[i][j]);
            }
        }
    }
    
    printf("\n");
    
    return 0;
}
