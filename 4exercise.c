#include<stdio.h> 
#include <stdlib.h>
#include <time.h>
#define N 10

void swap(int* arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1])
                swap(arr, j, j + 1);
        }
    }
}

int main(){
    int array_size = N;
    int array[array_size], i;
    srand((unsigned)time(NULL));
    for(i = 0; i < array_size; i++){
        array[i] = rand()%81-40;
    }
    printf("Array elements: ");
    for (int i = 0; i < array_size; i++) { 
        printf("%d ", array[i]); 
}
    int n = sizeof(array) / sizeof(array[0]);
    bubbleSort(array, n);
    printf("\nSort array elements: ");
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    return 0;
}