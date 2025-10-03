#include <iostream>
#include <cmath>


int main(){
    int a = 0;
    int b = 1;
    int n = 5;
    int k = 10;
    float s = 0, x;
    float value = 0;
    double h = (b - a) / double(k - 1);
    for(x = a; x <= b + 1e-8; x += h){
        int i = 0;
        s = 0;
            do {
                int fact = 1;
                for (int j = 1; j <= i; ++j){
                    fact *= j;
                }
                value = pow(std::log(3) * x, i) / fact;
                s += value;
                i ++;
            }while(fabs(value) > 0.0001);
            std::cout << "The sum of exercise is: " << s << std::endl;
            std::cout << "The 3 ** x : " << pow(3, x) << std::endl;    
    }       
    return 0;
}