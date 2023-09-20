//Adapte a rotina ssort() para ordenar um vetor de caracteres.

/*
#include <stdio.h>
#include <string.h>

void ssort(char arr[], int n) {
    int i, j;
    char temp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // Troca os caracteres
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    char vetor[] = "ssort";
    int tamanho = strlen(vetor);

    printf("Vetor original: %s\n", vetor);

    // Chama a função para ordenar o vetor de caracteres
    ssort(vetor, tamanho);

    printf("Vetor ordenado: %s\n", vetor);

    return 0;
}*/

// ====================================================================

//Adapte o procedimento bsort() de modo que o vetor seja ordenado de forma decrescente.

/*
#include <stdio.h>

void bsort(int arr[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                // Troca os elementos em ordem decrescente
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int vetor[] = {12, 45, 23, 6, 78, 53};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor original: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Chama a função para ordenar o vetor de forma decrescente
    bsort(vetor, tamanho);

    printf("Vetor ordenado (decrescente): ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
*/
