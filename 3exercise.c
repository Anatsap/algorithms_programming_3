#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
int main(){
    int q_o = 0;
    const char *fi[] = {"Tsapiv", "Anastasia", "Volodymyrivna"};
    printf(" %s\n %s\n %s\n",fi[0],fi[1],fi[2]); 
    const char *surname = fi[0];
    printf("Size massiv pointer = %zu\n",sizeof(fi)); 
    printf("Size pointer 1 string = %zu\n",sizeof(surname)); 
    printf("Size pointer 2 string = %zu\n",sizeof(fi[1])); 
    printf("Size pointer 3 string = %zu\n",sizeof(fi[2])); 
    for(int i = 0;i < strlen(surname); i++){
        if(surname[i] == 'o'){
            q_o++;
        }
    }
    printf("Quantity of 'o' : %d", q_o); 
    return 0;
}