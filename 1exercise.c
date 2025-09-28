#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[5][4];
    int sum[4] = {0};
    for (int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++){
        printf("Enter element of array %d: ", i + 1);
        scanf("%d", &array[i][j]);
    }
    }
    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++){
        printf("%d, ", array[i][j]); 
    } 
    }
    for(int j = 0; j < 4; j++){
        for(int i = 0; i < 5; i++)
            if (array[i][j] > 0){
                if(array[i][j] % 2 != 0){
                    sum[j] += array[i][j];
                }
        }
    } 
    for(int j = 0; j < 4; j++){
        printf("\nColumn sum %d: %d", j + 1, sum[j]);
    }
    
    return 0;
}