#include <stdio.h>
#include <string.h>

long long memoFatorial[21];

long long calcularFatorial(int n)
{
    if (memoFatorial[n] == 0)
        memoFatorial[n] = n * calcularFatorial(n - 1);
    return memoFatorial[n];
}

int main(){
    int numero1, numero2;
    memset(memoFatorial, 0, sizeof(memoFatorial));
    memoFatorial[0] = 1;
    while (scanf("%d %d", &numero1, &numero2) != EOF){
        long long soma = calcularFatorial(numero1) + calcularFatorial(numero2);
        printf("%lld\n", soma);
    }
    return 0;
}
