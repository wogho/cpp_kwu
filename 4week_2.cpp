#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2; // cin 입력 c의 scanf와 유사
    std::cout << item1 + item2 << std::endl; // cout 출력 c의 printf와 유사
    return 0;
}