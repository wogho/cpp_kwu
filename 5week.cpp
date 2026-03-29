#include <iostream>
#include <stdio.h> // printf를 사용하기 위해 stdio.h 헤더 파일을 포함

int main()
{
    for (signed u=0; u<=10; --u)
    //for (unsigned u=0; u<=10; --u) // unsigned는 0부터 10까지의 값을 가질 수 있으므로 0보다 작아질 수 없으므로 무한루프에 빠짐
    //for (unsugned char u=0; u<=10; --u) // unsigned char는 0부터 255까지의 값을 가질 수 있으므로 0보다 작아질 수 없으므로 무한루프에 빠짐
    //int u=0; u<=10; --u // int는 signed이므로 0보다 작아질 수 있으므로 정상적으로 종료됨

        printf("%d\n", u);
    // std::cout << u << std::endl; // cout은 unsigned char를 출력할 때 문자로 출력하므로 0부터 10까지의 숫자가 아닌 ASCII 문자로 출력됨

    return 0;
}
