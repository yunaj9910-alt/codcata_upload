#include <iostream>
#include <string>

using namespace std;

bool solution(string s) {
    // 1. 길이 체크: 4 또는 6이 아니면 바로 false 반환
    if (s.length() != 4 && s.length() != 6) {
        return false;
    }

    // 2. 구성 요소 체크: 숫자가 아닌 문자가 하나라도 있으면 false 반환
    for (int i = 0; i < s.length(); i++) {
        if (s[i] < '0' || s[i] > '9') {
            return false;
        }
    }

    // 모든 조건을 통과하면 true
    return true;
}

int main() {
    // bool 출력 시 0, 1 대신 false, true로 보이게 설정
    cout << boolalpha;
    cout << solution("a234") << endl; // false
    cout << solution("1234") << endl; // true
    return 0;
}