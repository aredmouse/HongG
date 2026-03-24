#include <iostream>
using namespace std;

int main() {
    int N;

    // 구구단의 단 수를 입력받음
    cin >> N;

    // 1부터 9까지 반복하면서 N단을 출력
    for (int i = 1; i <= 9; i++) {
        // 출력 형식: N * i = 결과
        cout << N << " * " << i << " = " << N * i << '\n';
    }

    return 0;
}