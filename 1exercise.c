#include <stdio.h>
#include <stdlib.h>

int main(){
    int array_size = 6, new_array_size;
    int array[array_size];
    double average;
    double sum = 0.0;
    for (int i = 0; i < array_size; i++) {
        printf("Enter element of array %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Array elements: ");
    for (int i = 0; i < array_size; i++) { 
        printf("%d, ", array[i]); 
    } 
    new_array_size = array_size;
    for(int i = 0; i < array_size; i++){
        if(array[i] != 0){
            sum += array[i];
        }else{
            new_array_size -= 1;
        }
    }
    average = sum / new_array_size;
    printf("\nResult : %.2f\n", average);
    system("pause");
    return 0;

}