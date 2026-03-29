#include <iostream>
#include <stdio.h>

int main()
{
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl; // 32
    std::cout << u - u2 << std::endl; // 4294967264 (unsigned는 음수값을 표현할 수 없으므로 양수로 표현됨)
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl; // 32 
    std::cout << i - i2 << std::endl; // -32 (signed는 음수값을 표현할 수 있으므로 정상적으로 출력됨)
    std::cout << i - u << std::endl; // 0 (i는 10, u는 10이므로 0이 출력됨) signed와 unsigned는 서로 다른 타입이므로 i - u는 unsigned로 변환되어 계산됨. 따라서 i - u는 0이 출력됨
    std::cout << u - i << std::endl; // 0 

    return 0;
}
