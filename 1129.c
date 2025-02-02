#include <stdio.h>

int main() {
    int n, i, j, valor, marcados;
    
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        
        for (i = 0; i < n; i++) {
            marcados = 0;
            int resposta = -1;

            for (j = 0; j < 5; j++) {
                scanf("%d", &valor);
                if (valor <= 127) {
                    marcados++;
                    resposta = j;
                }
            }

            if (marcados == 1)
                printf("%c\n", 'A' + resposta);
            else
                printf("*\n");
        }
    }
    
    return 0;
}
