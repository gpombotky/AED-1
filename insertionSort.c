#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int chave = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = chave;
    }
}

void preen(int arr[], double size){
    int i;
    for(i=0;i<size;i++){
        arr[i]=rand();
    }
}

int main() {
    int *vet,pass=1;
    double size=20000;
    clock_t t;
    while(size!=400000){
        t=clock();
        vet=malloc(size*sizeof(int));
        preen(vet,size);
        insertionSort(vet,size);
        t=clock()-t;
        printf("exec time: %lf , %.6lf\n",size,((double)t)/((CLOCKS_PER_SEC/1000)));
        free(vet);
        size+=20000;
    }
    return 0;
}
