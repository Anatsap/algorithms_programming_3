#include <iostream>

int main(){
    int n = 30;
    int max = 10;
    int numbers[n];
    for(int i = 0; i < n; ++i){
        numbers[i] = (i % max) + 1;
    }
    std::cout << "All numbers : ";
    for(int i = 0; i < n; ++i){
        std::cout << numbers[i] << ",";
    }
}