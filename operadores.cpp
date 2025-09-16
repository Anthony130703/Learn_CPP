#include <iostream>
#include <bitset>

int main()
{
    //Aritmeticos
    //suma -> a + b 
    // 5 + 2

    std::cout << "(5 + 2) = " << (5 + 2) << std::endl;

    //suma -> a - b 
    // 5 - 2
    
    std::cout << "(5 - 2) = " << (5 - 2) << std::endl;

    //suma -> a * b 
    // 5 * 2
    
    std::cout << "(5 * 2) = " << (5 * 2) << std::endl;

    //suma -> a / b 
    // 5 / 2
    
    std::cout << "(5 / 2) = " << (5 / 2) << std::endl;

    //suma -> a % b 
    // 5 % 2
    
    std::cout << "(5 % 2) = " << (5 % 2) << std::endl;
    //Operador AND
    std::cout << "(5 & 3) = " << (5 & 3) << std::endl;
    std::cout << "(5 & 3) = " << std::bitset<4>(5 & 3) << std::endl;
    //Operador OR
    std::cout << "(5 | 3) = " << (5 | 3) << std::endl;
    std::cout << "(5 | 3) = " << std::bitset<4>(5 | 3) << std::endl;

    return 0;
}