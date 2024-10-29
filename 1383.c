#include <stdio.h>

void ler(int su[9][9]){
    int i,j;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            scanf("%d",&su[i][j]);
        }
    }
}

int ero(int su[9][9]){
    int i,j,k,err=0;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(su[i][j]<1||su[i][j]>9){
                err++;
                return err;
            }
        }
    }
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            for(k=0;k<9;k++){
                if(su[i][j]==su[i][k]&&k!=j){
                    err++;
                    return err;
                }
            }
        }
    }
    for(j=0;j<9;j++){
        for(i=0;i<9;i++){
            for(k=0;k<9;k++){
                if(su[i][j]==su[k][j]&&k!=i){
                    err++;
                    return err;
                }
            }
        }
    }
    return err;
}

int main(){
    int su[9][9],i,j,k,err=0,ins[1000];
    long int n;
    scanf("%ld",&n);
    for(i=0;i<n;i++){
        ler(su);
        ins[i]=ero(su);
    }
    k=0;
    for(i=0;i<n;i++){
        k=i+1;
        printf("Instancia %d\n",k);
        if(ins[i]==0){
            printf("SIM\n\n");
        }
        else{
            printf("NAO\n\n");
        }
    }
}
