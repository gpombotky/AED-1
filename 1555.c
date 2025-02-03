#include <stdio.h>

int main() {
    int n, x, y;
    scanf("%d", &n);
    
    while (n--) {
        scanf("%d %d", &x, &y);
        
        int r = (3 * x) * (3 * x) + y * y;
        int b = 2 * (x * x) + (5 * y) * (5 * y);
        int c = -100 * x + y * y * y;
        
        if (r > b && r > c) {
            printf("Rafael ganhou\n");
        } else if (b > r && b > c) {
            printf("Beto ganhou\n");
        } else {
            printf("Carlos ganhou\n");
        }
    }
    
    return 0;
}
