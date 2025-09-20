#include <stdio.h> 
#include <stdlib.h> 
int main(){
    int array_size = 8, i = 0;
    int min = 0;
    int arr[array_size];
    arr[0] = 500;
    for (int i = 1; i < array_size; i++) {
        printf("Enter element of array %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Array elements: ");
    for (int i = 0; i < array_size; i++) { 
        printf("%d, ", arr[i]); 
    } 
    int *px = arr;
    for( i = 0; i < array_size; i++){
        if( *( px + i) % 5 == 0){
            if(*(px + i) < min){
                min = *(px + i);
            }
        }
    }
    printf("\nmin = %d\n", min); 
    system("pause"); 
    return 0;
}