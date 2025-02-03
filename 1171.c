#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int contagem[2001] = {0};

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        contagem[x]++;
    }

    for (int i = 1; i <= 2000; i++) {
        if (contagem[i] > 0) {
            printf("%d aparece %d vez(es)\n", i, contagem[i]);
        }
    }

    return 0;
}
