#include <stdio.h>
#include <string.h>

int main() {
    int gp, pil;
    while (1) {
        scanf("%d %d", &gp, &pil);
        if (gp == 0 && pil == 0) break;
        int f1[100][100];
        for (int i = 0; i < gp; i++) {
            for (int j = 0; j < pil; j++) {
                scanf("%d", &f1[i][j]);
            }
        }
        int sist;
        scanf("%d", &sist);
        for (int s = 0; s < sist; s++) {
            int k;
            scanf("%d", &k);
            int ponts[100] = {0};
            for (int i = 1; i <= k; i++) {
                scanf("%d", &ponts[i]);
            }
            int coloc[100] = {0};
            for (int i = 0; i < gp; i++) {
                for (int j = 0; j < pil; j++) {
                    int posicao = f1[i][j];
                    if (posicao <= k) {
                        coloc[j] += ponts[posicao];
                    }
                }
            }
            int maior = 0;
            for (int i = 0; i < pil; i++) {
                if (coloc[i] > maior) {
                    maior = coloc[i];
                }
            }
            int champs[100], champ_count = 0;
            for (int i = 0; i < pil; i++) {
                if (coloc[i] == maior) {
                    champs[champ_count++] = i + 1;
                }
            }
            for (int i = 0; i < champ_count; i++) {
                if (i > 0) printf(" ");
                printf("%d", champs[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
