#include <stdio.h>

int main() {
    int H1, M1, H2, M2;
    
    while (1) {
        scanf("%d %d %d %d", &H1, &M1, &H2, &M2);
        if (H1 == 0 && M1 == 0 && H2 == 0 && M2 == 0) {
            break;
        }
        int minutos_atual = H1 * 60 + M1;
        int minutos_alarme = H2 * 60 + M2;
        int diferenca = minutos_alarme - minutos_atual;
        if (diferenca < 0) {
            diferenca += 24 * 60;
        }
        printf("%d\n", diferenca);
    }
    return 0;
}
