#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    i = 0;
    j = 0; 
    k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
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
        mergeSort(vet,0,size-1);
        t=clock()-t;
        printf("exec time: %lf , %.6lf ms\n",size,((double)t)/((CLOCKS_PER_SEC/1000)));
        free(vet);
        size+=20000;
    }
    return 0;
}
    
