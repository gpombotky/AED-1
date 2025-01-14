#include <stdio.h>
 
int main() {
    int right, i,part[5],acert=0;
    scanf("%d",&right);
    for(i=0;i<5;i++){
        scanf("%d",&part[i]);
    }
    for(i=0;i<5;i++){
        if(part[i]==right){
            acert++;
        }
    }
    printf("%d\n",acert);
}
