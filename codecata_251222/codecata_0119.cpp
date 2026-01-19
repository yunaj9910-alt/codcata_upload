#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int original_x = x; // 원래 x 값을 보존
    int sum = 0;        // 자릿수의 합을 저장할 변수

    // 1. 모든 자릿수의 합 구하기
    while (x > 0) {
        sum += x % 10;  // 마지막 자릿수를 더함
        x /= 10;        // 마지막 자릿수를 제거
    }

    // 2. 하샤드 수 조건 확인 (나머지가 0이면 하샤드 수)
    if (original_x % sum == 0) {
        return true;
    }
    else {
        return false;
    }
}

// 결과를 출력하기 위한 메인 함수
int main() {
    int test_cases[] = { 10, 12, 11, 13 };

    for (int x : test_cases) {
        cout << "숫자: " << x << " -> 결과: " << (solution(x) ? "true" : "false") << endl;
    }

    return 0;
}