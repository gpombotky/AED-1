#include <stdio.h>
 
int main() {
    long int a,b,c;
    long int maior;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    maior=(a+b+abs(a-b))/2;
    maior=(maior+c+abs(maior-c))/2;
    printf("%d eh o maior\n",maior);
}
