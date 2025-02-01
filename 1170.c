#include <stdio.h>
 
int main() {
    float qtd;
    int x,dias=0;
    scanf("%d",&x);
    for(int i=0; i<x ; i++){
        dias=0;
        scanf("%f",&qtd);
        while(qtd>1){
            qtd=qtd/2;
            dias++;
        }
        printf("%d dias\n",dias);
    }
    
}
