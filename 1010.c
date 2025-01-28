#include <stdio.h>
 
int main() {
    float x,y,z,total;
    scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&z);
    total = y*z;
    scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&z);
    total=total+y*z;
    printf("VALOR A PAGAR: R$ %.2f\n",total);
}
