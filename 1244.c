#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int comp(const char *a, const char *b) {
    return strlen(b) - strlen(a);
}

void insertionSort(char palavras[][100], int tam) {
    for (int i = 1; i < tam; i++) {
        char temp[100];
        strcpy(temp, palavras[i]);

        int j = i - 1;
        while (j >= 0 && comp(palavras[j], temp) > 0) {
            strcpy(palavras[j + 1], palavras[j]);
            j--;
        }
        strcpy(palavras[j + 1], temp);
    }
}

int main() {
    int N;
    char frase[10000], palavras[100][100];

    scanf("%d\n", &N);

    for (int k = 0; k < N; k++) {
        fgets(frase, sizeof(frase), stdin);
        frase[strcspn(frase, "\n")] = '\0';

        int tam = 0;
        char *ptr = strtok(frase, " ");
        while (ptr != NULL) {
            strcpy(palavras[tam++], ptr);
            ptr = strtok(NULL, " ");
        }

        insertionSort(palavras, tam);

        printf("%s", palavras[0]);
        for (int i = 1; i < tam; i++) {
            printf(" %s", palavras[i]);
        }
        printf("\n");
    }

    return 0;
}
