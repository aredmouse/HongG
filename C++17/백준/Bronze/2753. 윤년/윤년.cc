#include <iostream>
using namespace std;

int main() {
    int year;

    // 연도를 입력받음
    cin >> year;

    // 윤년 조건:
    // 1. 4의 배수이면서 100의 배수가 아니면 윤년
    // 2. 또는 400의 배수이면 윤년
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
    {
        cout << 1;
    } 
    else {
        cout << 0;
    }

    return 0;
}