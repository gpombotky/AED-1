#include <stdio.h>
 
int main() {
    int t[4],i;
    for(i=0;i<4;i++){
        scanf("%d",&t[i]);
    }
    i=t[0]+t[1]+t[2]+t[3]-3;
    printf("%d\n",i);
}
