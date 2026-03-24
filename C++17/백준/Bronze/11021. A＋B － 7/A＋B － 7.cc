#include <iostream>
using namespace std;

int main() {
    int T;

    // 테스트 케이스 개수를 입력받음
    cin >> T;

    // T번 반복하면서 A와 B를 입력받고 합을 출력
    for (int i = 1; i <= T; i++) {
        int A, B;

        // 각 테스트 케이스의 두 정수를 입력받음
        cin >> A >> B;

        // 출력 형식: Case #번호: 합
        cout << "Case #" << i << ": " << A + B << '\n';
    }

    return 0;
}