#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int cont;
    struct celula *seg;
} celula;

typedef struct {
    celula *inicio;
    celula *fim;
} fila;

void enfileirar(fila *f, int valor) {
    celula *novo = (celula *)malloc(sizeof(celula));
    novo->cont = valor;
    novo->seg = NULL;
    if (f->fim == NULL) {
        f->inicio = f->fim = novo;
    } else {
        f->fim->seg = novo;
        f->fim = novo;
    }
}

int desenfileirar(fila *f) {
    if (f->inicio == NULL) return -1;
    celula *temp = f->inicio;
    int valor = temp->cont;
    f->inicio = f->inicio->seg;
    if (f->inicio == NULL){
        f->fim = NULL;
    }
    free(temp);
    return valor;
}

void moverInicioParaFim(fila *f) {
    if (f->inicio == NULL || f->inicio->seg == NULL) return;
    celula *temp = f->inicio;
    f->inicio = f->inicio->seg;
    temp->seg = NULL;
    f->fim->seg = temp;
    f->fim = temp;
}

void processarCartas(int n) {
    fila f = {NULL, NULL};

    for (int i = 1; i <= n; i++){
        enfileirar(&f, i);
    }
    printf("Discarded cards: ");
    for (int i = 1; i < n; i++) {
        printf("%d", desenfileirar(&f));
        if (i != n - 1) printf(", ");
        moverInicioParaFim(&f);
    }
    printf("\nRemaining card: %d\n", desenfileirar(&f));
}

int main() {
    int num;
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        processarCartas(num);
    }
    return 0;
}
