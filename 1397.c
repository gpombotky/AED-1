#include <stdio.h>

int main() {
    int n;
    
    while (1) {
        scanf("%d", &n);
        
        if (n == 0) break;
        
        int pontos_og = 0, pontos_filho = 0;
        
        for (int i = 0; i < n; i++) {
            int a, b;
            scanf("%d %d", &a, &b);
            
            if (a > b) {
                pontos_og++;
            } else if (b > a) {
                pontos_filho++;
            }
        }
        
        printf("%d %d\n", pontos_og, pontos_filho);
    }
    
    return 0;
}
