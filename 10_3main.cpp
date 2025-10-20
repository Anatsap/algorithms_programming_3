#include <iostream>
#include <iomanip>

int main()
{
    const int columns = 8;
    const int rows = 16;
    int ascii;
    char symbol;

    std::cout << "Tablet of ASCII: " << std::endl;
    std::cout << "    ";
    for (int i = 0; i < columns; ++i)
        std::cout << std::setw(10) << i;
    std::cout << std::endl;
    for (int j = 0; j < rows; ++j)
    {
        std::cout << std::setw(2) << j << " ";
        for (int i = 0; i < columns; ++i)
        {
            ascii = i * rows + j;
            if (ascii >= 32 && ascii < 127)
                symbol = static_cast<char>(ascii);
            else
                symbol = '.';
            std::cout << std::setw(8) << ascii << ": " << symbol;
        }
        std::cout << std::endl;
    }

    return 0;
}
