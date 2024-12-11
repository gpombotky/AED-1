#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void troca(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particionar(int arr[], int inicio, int fim) {
    int pivo = arr[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        if (arr[j] <= pivo) {
            i++;
            troca(&arr[i], &arr[j]);
        }
    }
    troca(&arr[i + 1], &arr[fim]);
    return i + 1;
}

void quickSort(int arr[], int inicio, int fim) {
    if (inicio < fim) {
        int pi = particionar(arr, inicio, fim);
        quickSort(arr, inicio, pi - 1);
        quickSort(arr, pi + 1, fim);
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
    while(size!=420000){
        t=clock();
        vet=malloc(size*sizeof(int));
        preen(vet,size);
        quickSort(vet,0,size-1);
        t=clock()-t;
        printf("exec time: %lf , %.6lf ms\n",size,((double)t)/((CLOCKS_PER_SEC/1000)));
        free(vet);
        size+=20000;
    }
    return 0;
}
    
