#include <stdio.h>

int main() {
    int c, n;
    scanf("%d", &c);
    
    while (c--) {
        scanf("%d", &n);
        int m[n];
        int s = 0;
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &m[i]);
            s += m[i];
        }
        
        float mt = s / (float)n;
        
        int am = 0;
        for (int i = 0; i < n; i++) {
            if (m[i] > mt) {
                am++;
            }
        }
        
        float p = (am / (float)n) * 100;
        
        printf("%.3f%%\n", p);
    }
    
    return 0;
}
