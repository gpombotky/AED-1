#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct noPilha{
    char dado;
    struct noPilha* abaixo;
};

struct pilha{
    int quantidade;
    struct noPilha* topo;
};

void empilhar(struct pilha* p, int dado){
    p->quantidade += 1;
    struct noPilha* novoTopo = (struct noPilha*) malloc(sizeof(struct noPilha));

    novoTopo->dado = dado;
    novoTopo->abaixo = p->topo;
    p->topo = novoTopo;
}

void desempilhar(struct pilha* p){
    if(p->quantidade > 0){
        p->quantidade -= 1;
        struct noPilha* topoAntigo = p->topo;
        p->topo = p->topo->abaixo;
        free(topoAntigo);
    }
}

char topo(struct pilha* p){
    return p->topo->dado;
}

int quantidade(struct pilha* p){
    return p->quantidade;
}

int pilhaVazia(struct pilha* p){
    return p->quantidade == 0;
}

void inicializar(struct pilha* p){
    p->quantidade = 0;
    p->topo = NULL;
}

void destruir(struct pilha* p){
    while(!pilhaVazia(p)){
        desempilhar(p);
    }
}

int main(){
    int i, tam;
    struct pilha p;
    char expressao[1001];

    while(scanf("%s\n", &expressao) != EOF){
        inicializar(&p);
        tam = strlen(expressao);

        for(i = 0; i < tam; ++i){
            if(expressao[i] == '('){
                empilhar(&p, '(');
            }else if(expressao[i] == ')'){
                if(pilhaVazia(&p))   break;
                else                  desempilhar(&p);
            }
        }

        if(i == tam && pilhaVazia(&p))   printf("correct\n");
        else                              printf("incorrect\n");

        destruir(&p);
    }

    return 0;
}
