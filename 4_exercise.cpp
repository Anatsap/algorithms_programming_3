#include <stdlib.h>
#include <iostream>
#include <math.h>

float PI = 3.1415926536f;

using namespace std;
int main()
{
    float a, V;
    cout<<"Input the side of the cube\n";
    cin >> a;
    V = pow(a, 3);
    cout << "The side - " << a << " cm, and Volume - " << V << "\n\n";

    float a_1, S;
    cout << "Input the side of the square\n";
    cin >> a_1;
    S = pow(a_1, 2);
    cout << "The side - " << a_1 << "cm, and Area - " << S << "\n\n";

    float r, L;
    cout << "Input the radius of the circle\n";
    cin >> r;
    L = 2 * PI * r;
    cout << "The radius -  " << r << "cm, and Length - " << L << "\n\n";

    float a_2, b, S_2;
    cout << "Input the sides of rectangle\n";
    cin >> a_2;
    cin >> b;
    S_2 = a_2 * b;
    cout << "The first side - " << a_2
             << "cm, second - "  << b << "cm, Area " << S_2 << "\n\n";


    float S_3, r_3;
    cout << "Input the radius of the circle\n";
    cin >> r_3;
    S_3 = pow(r_3, 2) * PI;
    cout << "The radius -  " << r_3 << "cm, and Area - " << S_3 << "\n\n";

    system("pause");
    return 0;
}