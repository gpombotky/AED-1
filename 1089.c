#include <stdio.h>

int main() {
    int n;
    
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;

        int h[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &h[i]);
        }

        int picos = 0;

        for (int i = 1; i < n - 1; i++) {
            if ((h[i] > h[i - 1] && h[i] > h[i + 1]) || (h[i] < h[i - 1] && h[i] < h[i + 1])) {
                picos++;
            }
        }

        if ((h[0] > h[n - 1] && h[0] > h[1]) || (h[0] < h[n - 1] && h[0] < h[1])) {
            picos++;
        }
        if ((h[n - 1] > h[n - 2] && h[n - 1] > h[0]) || (h[n - 1] < h[n - 2] && h[n - 1] < h[0])) {
            picos++;
        }

        printf("%d\n", picos);
    }

    return 0;
}
