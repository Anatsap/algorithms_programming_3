#include <stdio.h>
#include <termios.h> //заміна для <conio.h> на Linux
#include <stdlib.h>
int main()
{   
    puts("My first program");
    puts("My last name - Tsapiv");

    char s = 'a'; 
    printf("Symbol %c = (%d) 10S =(%#o) 8S ", s, s, s);
    printf(" = (%#x) 16S size char = %d bait\n", s, sizeof(s));

    char n = 'n'; 
    printf("First symbol of my name is %c = (%d) 10S = (%#o) 8S ", n, n, n);
    printf(" = (%#x) 16S size char = %zu bait\n", n, sizeof(n));

    int a = 78;
    printf("a = %d size int = %d bait\n", a, sizeof(a));

    float b = 56.23;
    printf("b = %f = %e size float = %d bait\n", b, b, sizeof(b)); 

    short short_var = -32768; 
    printf("short_var = %d size short = %zu bait\n", short_var, sizeof(short_var));

    long long_var = 88l;
    printf("long_var = %lu size long = %lu bait\n", long_var, sizeof(long_var));

    double double_var = 3.498e-11; 
    printf("double_var = %le = %e size double = %zu bait\n", double_var, sizeof(double_var));

    puts("\nPress any key and Enter...\n");
    getchar(); 

    return 0;
}