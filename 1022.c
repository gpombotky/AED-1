#include <stdio.h>

struct fracao
{
    int num, den;
};

struct fracao soma(struct fracao f1, struct fracao f2)
{
    struct fracao res;
    res.num = f1.num * f2.den + f2.num * f1.den;
    res.den = f1.den * f2.den;
    return res;
}

struct fracao subtracao(struct fracao f1, struct fracao f2)
{
    struct fracao res;
    res.num = f1.num * f2.den - f2.num * f1.den;
    res.den = f1.den * f2.den;
    return res;
}

struct fracao multiplicacao(struct fracao f1, struct fracao f2)
{
    struct fracao res;
    res.num = f1.num * f2.num;
    res.den = f1.den * f2.den;
    return res;
}

struct fracao divisao(struct fracao f1, struct fracao f2)
{
    struct fracao res;
    res.num = f1.num * f2.den;
    res.den = f1.den * f2.num;
    return res;
}

int mdc(int a, int b)
{
    return (b == 0) ? a : mdc(b, a % b);
}

struct fracao simplificar(struct fracao f)
{
    int m = mdc(f.num < 0 ? -f.num : f.num, f.den);
    f.num /= m;
    f.den /= m;
    return f;
}

int main()
{
    int n;
    char op;
    struct fracao f1, f2, res;

    scanf("%d\n", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d / %d %c %d / %d\n", &f1.num, &f1.den, &op, &f2.num, &f2.den);

        switch (op)
        {
        case '+':
            res = soma(f1, f2);
            break;
        case '-':
            res = subtracao(f1, f2);
            break;
        case '*':
            res = multiplicacao(f1, f2);
            break;
        case '/':
            res = divisao(f1, f2);
            break;
        }

        printf("%d/%d = ", res.num, res.den);
        res = simplificar(res);
        printf("%d/%d\n", res.num, res.den);
    }

    return 0;
}
