#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2; // cin 입력
    std::cout << item1 + item2 << std::endl; // cout 출력 
    return 0;
}