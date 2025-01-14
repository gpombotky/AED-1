#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarPares(char* expressao) {
    int pilha = 0;
    int pares = 0;
    for (int i = 0; expressao[i] != '\0'; i++) {
        if (expressao[i] == '<') {
            pilha++;
        } else if (expressao[i] == '>') {
            if (pilha > 0) {
                pilha--;
                pares++;
            }
        }
    }
    return pares;
}
int main() {
    int N;
    char expressao[1001];
    scanf("%d", &N);
    for (int k = 0; k < N; k++) {
        scanf("%s", expressao);
        int resposta = contarPares(expressao);
        printf("%d\n", resposta);
    }
    return 0;
}
