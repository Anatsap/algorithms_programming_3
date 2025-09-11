#include <stdio.h>
#include <stdlib.h> 
#include <iostream> 
#define STR1 "Today we are"
#define STR2 "learning how to " 
#define STR3 "\"Programm on C++\"" 
#define STR4 "Anastasia Volodymyrivna"
#define STR5 "Tsapiv Anastasia"
#define STR6 "Programming Klysko"
#define STR7 "Krenevich \"Algorithmization data structures\""
#define STR8 "Lviv Orlyk"
int main()
{
    printf("|%s|\n", STR1); 
    printf("|%70.12s|\n", STR2); 
    printf("|%70.24s|\n\n", STR3); 
    printf("|%20.5s|\n", STR1); 
    printf("|%20.8s|\n", STR2); 
    printf("|%-20.9s|\n", STR3);


    printf("|%s|\n", STR4);
    printf("|%-100.9s|\n", STR4);
    printf("|%100.9s|\n", STR4);

    printf("|%s|\n", STR5);
    printf("|%-100.6s|\n", STR5);
    printf("|%100.6s|\n", STR5);

    printf("|%s|\n", STR6);
    printf("|%-100.11s|\n", STR6);
    printf("|%100.11s|\n", STR6);
    

    printf("|%s|\n", STR7);
    printf("|%-100.9s|\n", STR7);
    printf("|%100.9s|\n", STR7);

    printf("|%s|\n", STR8);
    printf("|%-100.4s|\n", STR8);
    printf("|%100.4s|\n", STR8);

    system("pause"); 
    return 0;
}