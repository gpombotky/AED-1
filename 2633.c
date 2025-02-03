#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[21];
    int validade;
} Carne;

int cmp(const void *a, const void *b) {
    Carne *carneA = (Carne *)a;
    Carne *carneB = (Carne *)b;
    return carneA->validade - carneB->validade;
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        Carne carnes[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%s %d", carnes[i].nome, &carnes[i].validade);
        }

        qsort(carnes, n, sizeof(Carne), cmp);
        
        for (int i = 0; i < n; i++) {
            if (i > 0) {
                printf(" ");
            }
            printf("%s", carnes[i].nome);
        }
        printf("\n");
    }
    
    return 0;
}
