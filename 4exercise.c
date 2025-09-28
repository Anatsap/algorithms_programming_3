#include<stdio.h> 
#include <stdlib.h>
#include <time.h>

int main(){
    int min_val = -5000;
    int max_val = 5000;
    int n, i;
    long *ptr;  
    puts("Input size array");
    scanf("%d", &n);
    ptr=(long*)malloc(n*sizeof(long));
    if(ptr==NULL){
        puts("Error"); 
        return -1;
    }
    srand((unsigned)time(NULL));
    for (int i = 0; i < n; i++) {
        float random_num = min_val + (float)rand() / RAND_MAX * (max_val - min_val);
        ptr[i] = random_num;
        }
    printf("Array elements: ");
    for (int i = 0; i < n; i++) { 
        printf("%ld ", ptr[i]); 
    }
    free(ptr);
    return 0;
}
