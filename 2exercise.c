#include<time.h>
#include<stdlib.h> 
#include <stdio.h>

int main(){
    int array_size = 15;
    int array[array_size], i;
    int negative = 0;
    srand((unsigned)time(NULL));
    for(i = 0; i < array_size; i++){
        array[i] = rand()%81-40;
    }
    printf("Array elements: ");
    for (int i = 0; i < array_size; i++) { 
        printf("%d, ", array[i]); 
        if(array[i] < 0){
            negative ++;
        }
    }
    printf("\nResult : %d\n", negative);
    system("pause");
    return 0;

}