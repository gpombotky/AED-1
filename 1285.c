#include <stdio.h>

int tem_digitos_repetidos(int num) {
    int digitos = 0;
    while (num > 0) {
        int digito = num % 10;
        if ((digitos & (1 << digito)) != 0) {
            return 1;
        }
        digitos |= (1 << digito);
        num /= 10;
    }
    return 0;
}

int main() {
    int n, m;
    
    while (scanf("%d %d", &n, &m) != EOF) {
        int contagem = 0;
        
        for (int i = n; i <= m; i++) {
            if (!tem_digitos_repetidos(i)) {
                contagem++;
            }
        }
        
        printf("%d\n", contagem);
    }
    
    return 0;
}
