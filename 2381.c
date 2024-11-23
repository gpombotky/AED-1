#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    char *nome;
    struct nodo *prox;
} nodo;

void procurar(nodo *inicio, int indice) {
    nodo *atual = inicio;
    for (int i = 0; i < indice; i++)
        atual = atual->prox;
    printf("%s\n", atual->nome);
}

void inserir(nodo *inicio, char *valor) {
    nodo *atual, *seguinte, *novo;
    novo = (nodo*)malloc(sizeof(nodo));
    novo->nome = (char*)malloc((strlen(valor) + 1) * sizeof(char));
    strcpy(novo->nome, valor);
    atual = inicio;
    seguinte = inicio->prox;
    while (atual->prox != NULL && strcmp(seguinte->nome, valor) < 0) {
        atual = seguinte;
        seguinte = seguinte->prox;
    }
    novo->prox = atual->prox;
    atual->prox = novo;
}

int main() {
    int qntd_alunos, posicao_sorteada;
    char nome[21];
    nodo *inicio;
    inicio = (nodo *)malloc(sizeof(nodo));
    inicio->prox = NULL;
    scanf("%d", &qntd_alunos);
    scanf("%d", &posicao_sorteada);
    getchar();
    while (qntd_alunos > 0) {
        gets(nome);
        nome[strlen(nome) + 1] = '\0';
        inserir(inicio, nome);
        qntd_alunos--;
    }
    procurar(inicio, posicao_sorteada);
}
