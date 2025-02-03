#include <stdio.h>

int main() {
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;

        int r;
        int m = 0, j = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d", &r);
            if (r == 0) m++;
            else if (r == 1) j++;
        }

        printf("Mary won %d times and John won %d times\n", m, j);
    }
    
    return 0;
}
