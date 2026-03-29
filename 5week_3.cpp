#include <iostream>
#include <cstdio>


int main()
{
    std::cout << "Hi \x4d0\115!\n << "!\n"; // 
    std::cout << '\115' << '\n' << std::endl; // \115 is 'M' in octal
    
    return 0;
}