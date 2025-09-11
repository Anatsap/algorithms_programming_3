#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
    short x1_1 = 32763, x1_2, x1_3;
    unsigned short y1_1 = 65531, y1_2, y1_3;
    char z1_1 = 122, z1_2, z1_3;
    unsigned char v1_1 = 2, v1_2, v1_3;
    x1_2 = x1_1 + 4;
    x1_3 = x1_2 + 1;
    printf("short value: %d %d %d\n", x1_1, x1_2, x1_3); 
    y1_2 = y1_1 + 4; 
    y1_3 = y1_2 + 1;
    printf("unsigned short value: %d %d %d\n",y1_1, y1_2, y1_3); 
    z1_2 = z1_1 + 5; 
    z1_3 = z1_2 + 1;
    printf("char value: %d %d %d\n",z1_1, z1_2, z1_3); 
    v1_2 = v1_1 + 253;
    v1_3 = v1_2 + 1;
    printf("unsigned char value: %d %d %d\n\n",v1_1, v1_2, v1_3); 


    short x2_1 = -32763, x2_2, x2_3;
    unsigned short y2_1 = 31, y2_2, y2_3;
    char z2_1 = -120, z2_2, z2_3;
    unsigned char v2_1 = 20, v2_2, v2_3;
    x2_2 = x2_1 - 5;
    x2_3 = x2_2 - 1;
    printf("short value: %d %d %d\n", x2_1, x2_2, x2_3); 
    y2_2 = y2_1 - 31; 
    y2_3 = y2_2 - 1;
    printf("unsigned short value: %d %d %d\n",y2_1, y2_2, y2_3); 
    z2_2 = z2_1 - 8; 
    z2_3 = z2_2 - 1;
    printf("char value: %d %d %d\n",z2_1, z2_2, z2_3); 
    v2_2 = v2_1 - 20;
    v2_3 = v2_2 - 1;
    printf("unsigned char value: %d %d %d\n\n",v2_1, v2_2, v2_3); 


    short x3_1 = 30, x3_2, x3_3;
    unsigned short y3_1 = 35000, y3_2, y3_3;
    char z3_1 = -25, z3_2, z3_3;
    unsigned char v3_1 = 20, v3_2, v3_3;
    x3_2 = x3_1 + 32737;
    x3_3 = x3_2 + 1;
    printf("short value: %d %d %d\n", x3_1, x3_2, x3_3); 
    y3_2 = y3_1 + 30535; 
    y3_3 = y3_2 + 1;
    printf("unsigned short value: %d %d %d\n",y3_1, y3_2, y3_3); 
    z3_2 = z3_1 + 152; 
    z3_3 = z3_2 + 1;
    printf("char value: %d %d %d\n",z3_1, z3_2, z3_3); 
    v3_2 = v3_1 + 235;
    v3_3 = v3_2 + 1;
    printf("unsigned char value: %d %d %d\n\n",v3_1, v3_2, v3_3); 


    short x4_1 = -32000, x4_2, x4_3;
    unsigned short y4_1 = 65530, y4_2, y4_3;
    char z4_1 = -108, z4_2, z4_3;
    unsigned char v4_1 = 240, v4_2, v4_3;
    x4_2 = x4_1 - 768;
    x4_3 = x4_2 - 1;
    printf("short value: %d %d %d\n", x4_1, x4_2, x4_3); 
    y4_2 = y4_1 - 65530; 
    y4_3 = y4_2 - 1;
    printf("unsigned short value: %d %d %d\n",y4_1, y4_2, y4_3); 
    z4_2 = z4_1 - 20; 
    z4_3 = z4_2 - 1;
    printf("char value: %d %d %d\n",z4_1, z4_2, z4_3); 
    v4_2 = v4_1 - 240;
    v4_3 = v4_2 - 1;
    printf("unsigned char value: %d %d %d\n\n",v4_1, v4_2, v4_3); 


    int x5_1 = 2147483645, x5_2, x5_3;
    unsigned int y5_1 = 4294967290, y5_2, y5_3;
    char z5_1 = 125, z5_2, z5_3;
    unsigned char v5_1 = 252, v5_2, v5_3;
    x5_2 = x5_1 + 2;
    x5_3 = x5_2 + 1;
    printf("int value: %d %d %d\n", x5_1, x5_2, x5_3); 
    y5_2 = y5_1 + 5; 
    y5_3 = y5_2 + 1;
    printf("unsigned int value: %d %d %d\n",y5_1, y5_2, y5_3); 
    z5_2 = z5_1 + 2; 
    z5_3 = z5_2 + 1;
    printf("char value: %d %d %d\n",z5_1, z5_2, z5_3); 
    v5_2 = v5_1 + 3;
    v5_3 = v5_2 + 1;
    printf("unsigned char value: %d %d %d\n\n",v5_1, v5_2, v5_3); 


    system("pause"); 
    return 0;
}