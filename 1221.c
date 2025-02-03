#include <stdio.h>

int eh_primo(int x) {
    if (x <= 1) return 0;
    if (x <= 3) return 1;
    if (x % 2 == 0 || x % 3 == 0) return 0;
    
    int i = 5;
    while (i * i <= x) {
        if (x % i == 0 || x % (i + 2) == 0) return 0;
        i += 6;
    }
    return 1;
}

int main() {
    int n, x;
    scanf("%d", &n);
    
    while (n--) {
        scanf("%d", &x);
        if (eh_primo(x)) {
            printf("Prime\n");
        } else {
            printf("Not Prime\n");
        }
    }
    
    return 0;
}
