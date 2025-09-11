#include<stdio.h>
#include <stdlib.h>
#include <math.h>

void task_1()
{
    int a1 = 3, a2 = 8, b1, b2, b3;
    a2 -= a1;	// a2 = 8 - 3 = 5
    b1 = pow(a2, 2) * 2 + a1;	// b1 = 5^2 * 2 + 3 = 50 + 3 = 53
    b2 = !a1 > b2;	// b2 = (0 > 5?? ) ? ні 0
    printf("b2 = %d\n", b2);
    b3 = ++b2;	// b2 = b2 + 1 = 0 + 1 = 1 b3 = b2 = 1
    printf("a2=%d b1=%d b2=%d b3=%d\n",a2, b1, b2, b3);
    float f1 = 1.5, f2 = 1.5, r1, r2;
    r1 = pow(f1, 2) + (2 * f2);	// r1 = 1.5 ^2 + (2 * 1.5) = 2.25 + 3 = 5.25
    r2 = (f1 != f2)?f1 - 0.3:f2 + 0.4;	// r2 = (1.5 != 1.5)? нi (1.5 + 0.4)= 1.9
    printf("r1=%5.2f r2=%5.2f\n",r1,r2);
    system("pause");
}

void task_2(){
    int a1 = 2, a2 = 3, b1, b2, b3;
    a2 *= 10;	// a2 = 3 * 10 = 30
    b1 = pow(a1, 3) + a2;	// b1 = 2^3 + 30 = 8 + 30 = 38
    b2 = a1 > a2;	// b2 = (2 > 30) ? ні 0
    printf("b2 = %d\n", b2);
    b3 = ++b2;	// b2 = b2 + 1 = 0 + 1 = 1 b3 = b2 = 1
    printf("a2=%d b1=%d b2=%d b3=%d\n",a2, b1, b2, b3);
    float f1 = 1.5, f2 = 1.5, r1, r2;
    r1 = 2 * f1 - f2;	// r1 = 2 * 1.5 - 1.5 = 1.5
    r2 = (f1 == f2)?f1 * 3:f2 * 5;	// r2 = (1.5 == 1.5)? так (1.5 * 3) = 4.5
    printf("r1=%5.2f r2=%5.2f\n",r1,r2);
    system("pause");

}

void task_3(){
    int a1 = 6, a2 = 20, b1, b2, b3;
    a2 /= 5;	// a2 = 20 / 5 = 4
    b1 = 5 * a1 + pow(a2, 2);	// b1 = 5 * 6 + 4^2 = 30 + 16 = 46
    b2 = a1 > a2;	// b2 = (6 > 4) ? так 1
    printf("b2 = %d\n", b2);
    b3 = --b2;	// b2 = b2 - 1 = 1 - 1 = 0 b3 = b2 = 0
    printf("a2=%d b1=%d b2=%d b3=%d\n",a2, b1, b2, b3);
    float f1 = 1.5, f2 = 3.5, r1, r2;
    r1 = f1 + 4 * f2;	// r1 = 1.5 + 14 = 15.5
    r2 = (f1 >= f2)?f1 - 2.5:f2 + 5.2;	// r2 = (1.5 >= 3.5)? ні (3.5 + 5.2) = 8.7
    printf("r1=%5.2f r2=%5.2f\n",r1,r2);
    system("pause");

}


void task_4(){
    int a1 = 3, a2 = 2, b1, b2, b3;
    a2 += a1 + 5;	// a2 = 2 + 3 + 5 = 10
    b1 = pow(a1, 3) + 3 * a2;	// b1 = 27 + 3 * 10 = 27 + 30 = 57
    b2 = a1 < a2;	// b2 = (3 < 10) ? так 1
    printf("b2 = %d\n", b2);
    b3 = b2--;	// b2 = b2 = 1, b2 = b2 -1 = 0
    printf("a2=%d b1=%d b2=%d b3=%d\n",a2, b1, b2, b3);
    float f1 = 1.5, f2 = 2.5, r1, r2;
    r1 = f1/(f2 * 2);	// r1 = 1.5/(2.5 * 2) = 1.5 / 5 = 0.3
    r2 = (f1 <= f2)?f1 - 0.2:f2 + 0.7;	// r2 = (1.5 <= 2.5)? так (1.5 - 0.2) = 1.3
    printf("r1=%5.2f r2=%5.2f\n",r1,r2);
    system("pause");

}

void task_5(){
    int a1 = 5, a2 = 13, b1, b2, b3;
    a2 -= a1 + 5;	// a2 = 13 - (5 + 5) = 3
    b1 = a1 + pow(a2, 2);	// b1 = 5 + 3*3 = 14
    b2 = a1 > a2;	// b2 = (5 > 3) ? так 1
    printf("b2 = %d\n", b2);
    b3 = b2++;	// b3 = b2 = 1, b2 = b2 + 1 = 2
    printf("a2=%d b1=%d b2=%d b3=%d\n",a2, b1, b2, b3);
    float f1 = 4.5, f2 = 1.8, r1, r2;
    r1 = f1 + f2/2;	// r1 = 4.5 + 1.8/2 = 4.5 + 0.9 = 5.4
    r2 = (f1 > f2)?f1 + 1.2:f2 - 1.4;	// r2 = (4.5 > 1.8)? так (4.5 + 1.2) = 5.7
    printf("r1=%5.2f r2=%5.2f\n",r1,r2);
    system("pause");

}

int main(){
    task_1();
    task_2();
    task_3();
    task_4();
    task_5();
    return 0;
}




