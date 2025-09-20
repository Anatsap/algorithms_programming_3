#include<stdio.h> 
#include <stdlib.h> 
#include <string.h>
#define K 300
int main(){
    char str[K]; 
    char message[K]; 
    puts("Input 1 string: ");
    fgets(str, K, stdin); 
    str[strcspn(str, "\n")] = 0;
    size_t length = strlen(str);
    printf("\nString 1:\n%s\n",str);
    printf("The length of the string is: %zu\n", length);

    puts("\nMessage to string: ");
    fgets(message, K, stdin);
    message[strcspn(message, "\n")] = 0;
    size_t length2 = strlen(message);
    printf("The length of the string is: %zu\n", length2);
    strcat(str, message);
    printf("After concatenation: %s\n", str);
    printf("Length of concatenated string: %zu\n", strlen(str));
    
    system("pause"); 
    return 0;
    }