#include <stdio.h> 
#include <stdlib.h> 
#include<time.h> 
int main(){
    int i,j,N;
    printf("Input the size of the square matrix: "); 
    scanf("%u",&N);
    int ** matr; 
    matr = (int**)malloc(N*sizeof(int*)); 
    if(matr == NULL){
        puts("Error!"); 
        return -1;
    } 
    for(i = 0;i<N;i++){
        matr[i] = (int*)malloc(N*sizeof(int));
        if(matr[i] == NULL){
            puts("Error!");
            return -2;
        }
    }
    puts("\n Input the elements of the matrix matr:"); 
    for(i = 0; i< N; i++){
        for(j = 0;j<N;j++){ 
            scanf("%d", &matr[i][j]);
        }
    }
    puts("\n\tMatrix matr:"); 
    for(i = 0;i<N;i++){
        for(j = 0;j<N;j++){
            printf("%8d", matr[i][j]);
        } 
        printf("\n");	
    }
    int **mas;
    mas = (int**)malloc(N*sizeof(int*));
    if(mas == NULL){puts("Error!"); 
    return -1;
    } 
    for(i = 0;i<N;i++){
        mas[i] = (int*)malloc(N*sizeof(int));
        if(mas[i]==NULL){
            puts("Error!");
            return -2;
        }
    }
    srand((unsigned)time(NULL));
    puts("\n\tMatrix mas: "); 
    for(i = 0;i < N;i++){
        for(j = 0;j<N;j++){
            mas[i][j] = rand()%101-50;
            printf("%8d",mas[i][j]);
        } 
        printf("\n");	
    }
    puts("\nNew values of elements of matrix mas:"); 
    for(i = 0; i < N; i++){
        for(j = 0;j<N;j++){
            mas[i][j] = matr[i][j] + mas[i][j];
            printf("%8d",mas[i][j]);
        } 
        printf("\n");
    }
    int **third_mat;
    third_mat = (int**)malloc(N*sizeof(int*));
    if(third_mat == NULL){
        puts("Error!"); 
        return -1;
    }
    for(i = 0;i<N;i++){
        third_mat[i] = (int*)malloc(N*sizeof(int));; 
        if(third_mat[i] == NULL){
            puts("Error!");
            return -2;
        }
    }
    for(i = 0;i < N;i++){
        for(j = 0;j<N;j++){
            if(matr[i][j] > mas[i][j]){
                third_mat[i][j] = matr[i][j];
            }else{
                third_mat[i][j] = mas[i][j];
            }
        }
    }
    puts("\nThird matrix :"); 
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("%8d", third_mat[i][j]);
        } 
        printf("\n");	
    }

    for(i = 0; i < N; i++){
        free(matr[i]); 
        free(mas[i]); 
        free(third_mat[i]);
    }
    free(matr); 
    free(mas);
    free(third_mat);
    system("pause");
    return 0;
}