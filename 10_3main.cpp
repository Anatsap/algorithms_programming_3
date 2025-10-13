#include <iostream>
#include <iomanip>

int main(){
    int colums = 8;
    int rows = 16;
    std::cout << "Colums and rows of ASCII : " << std::endl;
    for(int i = 0; i < colums; ++i){
        std::cout << std::setw(10) << std::hex << i << " | ";
        for(int j = 0; j < rows; ++j){
            std::cout << std::setw(10) << std::dec << i << "|";
        }
    }
    std::cout << std::left << std::setw(15) << "Dec"
              << std::setw(10) << "Hex"
              << std::setw(20) << "Oct" << std::endl;

    std::cout << std::setfill(' ') << std::setw(45) << "" << std::endl;

    std::cout << std::left << std::setw(15) << 0
              << std::setw(10) << std::hex << 0
              << std::setw(20) << std::oct << 0 << std::endl;

    std::cout << std::left << std::setw(15) << 1
              << std::setw(10) << std::hex << 1
              << std::setw(20) << std::oct << 1 << std::endl;
    std::cout << std::left << std::setw(15) << 2
              << std::setw(10) << std::hex << 2
              << std::setw(20) << std::oct << 2 << std::endl;
    return 0;
}