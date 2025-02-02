#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        int m;
        scanf("%d", &m);

        char produtos[m][51];
        double precos[m];

        for (int i = 0; i < m; i++) {
            scanf("%s %lf", produtos[i], &precos[i]);
        }

        int p;
        scanf("%d", &p);

        double total = 0.0;

        for (int i = 0; i < p; i++) {
            char produto[51];
            int quantidade;
            scanf("%s %d", produto, &quantidade);

            for (int j = 0; j < m; j++) {
                if (strcmp(produto, produtos[j]) == 0) {
                    total += precos[j] * quantidade;
                    break;
                }
            }
        }

        printf("R$ %.2lf\n", total);
    }

    return 0;
}
