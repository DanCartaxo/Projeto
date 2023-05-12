#1
#include <stdio.h>

int main() {
  int vetor[10];
  int i, maior;

    for (i = 0; i < 10; i++) {
    printf("Digite o %dº número: ", i+1);
    scanf("%d", &vetor[i]);
  }

 
  maior = vetor[0];

 
  for (i = 1; i < 10; i++) {
    if (vetor[i] > maior) {
      maior = vetor[i];
    }
  }

  printf("O maior número é: %d\n", maior);

  return 0;
}

#2
#include <stdio.h>

int main() {
  int vetor[10];
  int i, maior, menor, diferenca;

    for (i = 0; i < 10; i++) {
    printf("Digite o %dº número: ", i+1);
    scanf("%d", &vetor[i]);
  }

  maior = vetor[0];
  menor = vetor[0];

    for (i = 1; i < 10; i++) {
    if (vetor[i] > maior) {
      maior = vetor[i];
    }
    if (vetor[i] < menor) {
      menor = vetor[i];
    }
  }

  diferenca = maior - menor;

  printf("O maior número é: %d\n", maior);
  printf("O menor número é: %d\n", menor);
  printf("A diferença entre o maior e o menor número é: %d\n", diferenca);

  return 0;
}

#3
#include <stdio.h>

int main() {
    int vetor[10];
    int i;
    
 
    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
  
    printf("Números ímpares do vetor:");
    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 != 0) {
            printf(" %d", vetor[i]);
        }
    }
    printf("\n");
    
    return 0;
}

#4
#include <stdio.h>

int ehPrimo(int num) {
  int i;
  if (num <= 1) {
    return 0;
  }
  for (i = 2; i <= num/2; i++) {
    if (num % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int vetor[10];
  int i;


  for (i = 0; i < 10; i++) {
    printf("Digite o %dº número: ", i+1);
    scanf("%d", &vetor[i]);
  }

  printf("Os números primos do vetor são: ");
  for (i = 0; i < 10; i++) {
    if (ehPrimo(vetor[i])) {
      printf("%d ", vetor[i]);
    }
  }

  printf("\n");

  return 0;
}

#5
#include <stdio.h>

#define TAMANHO_VETOR 8

int main() {
    int vetor[TAMANHO_VETOR];
    int i, numero, posicao;
    int existe = 0;
    
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("Digite o %dº número inteiro: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    printf("Digite um número inteiro para pesquisar no vetor: ");
    scanf("%d", &numero);
    
    for (i = 0; i < TAMANHO_VETOR; i++) {
        if (vetor[i] == numero) {
            posicao = i;
            existe = 1;
            break;
        }
    }
    
       if (existe) {
        printf("O número %d foi encontrado na posição %d do vetor.\n", numero, posicao);
    } else {
        printf("O número %d não foi encontrado no vetor.\n", numero);
    }
    
    return 0;
}
