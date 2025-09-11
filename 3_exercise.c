#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
int main()
{
    float x, z, res;
    puts("Input x, z");
    scanf("%f %f", &x, &z);
    res = pow((4.2 * x - z), 2) / 3.5 ;
    printf("x = %3.2f, z = %3.2f res = %3.2f\n", x, z, res);
    

    double a, b, c, res1;
    puts("Input a, b, c");
    scanf("%lf %lf %lf", &a, &b, &c);
    res1 = a + (2.8 * b) - pow(c, 2);
    printf("a = %2.3lf, b = %2.3lf, c = %2.3lf, res1 = %2.3f\n", a, b, c, res1);

    double k, g, res2;
    puts("Input k, g");
    scanf("%lf %lf", &k, &g);
    res2 =pow(k, 2) + (g - k)/2.3;
    printf("k = %4.3lf, g = = %4.3lf, res2 = %4.3lf\n", k, g, res2);

    float v, s, f, res3;
    puts("Input v, s, f");
    scanf("%f %f %f", &v, &s, &f);
    res3 = pow(s, 3)/v - f * v;
    printf("v = %2.4f, s = %2.4f, f = %2.4f, res3 = %2.4f", v, s, f, res3);

    double x_1, z_1, h, res4;
    puts("Input x, z, h");
    scanf("%lf %lf %lf", &x_1, &z_1, &h);
    res4 = pow(x_1, 3) + z_1/(h * h);
    printf("x_1 = %3.3lf, z_1 = %3.3lf, h = %3.3lf, res4 = %3.3lf\n", x_1, z_1, h, res4);
    system("pause");


    return 0;
}

