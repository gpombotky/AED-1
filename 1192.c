#include <stdio.h>
 
int main() {
    int pri,seg,x,i,num;
    char let;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        scanf("%d",&pri);
        scanf("%c",&let);
        scanf("%d",&seg);
        
        if(pri==seg){
            num=pri*seg;
        }else if(let<97){
            num=seg-pri;
        }else if(let>=97){
            num=seg+pri;
        }
        printf("%d\n",num);
    }
}
