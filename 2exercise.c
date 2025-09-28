#include<time.h>
#include<stdlib.h> 
#include <stdio.h>

const int N = 5, M = 4;
float min = 15.5;
int q1 = 0, q2 = 0, q3 = 0, i, j;
float A[N][M];

int main(){
    srand(time(NULL));
    double min_val = 10.50;
    double max_val = 30.50;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            float random_num = min_val + (float)rand() / RAND_MAX * (max_val - min_val);
            A[i][j] = random_num;
         }
    }
    printf("Array elements: ");
    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
        printf("%0.2f, ", A[i][j]); 
    }}
    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            if(A[i][j] > min){
                q1 ++;
            }
    }}
    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            if(*(*(A+i)+j) > min){
                q2 ++;
            }
    }}
    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            if((*(A+i))[j] > min){
                q3 ++;
            }
    }}
    printf("\nResult : %d\n", q1);
    printf("\nResult : %d\n", q2);
    printf("\nResult : %d\n", q3);

    system("pause");
    return 0;

}