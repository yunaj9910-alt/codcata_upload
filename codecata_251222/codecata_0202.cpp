#include <string>
#include <vector>
#include <iostream> // 입출력을 위해 추가

using namespace std;

string solution(int n) {
    string answer = "";

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            answer += "수"; // 짝수 번째 (0, 2, 4...)
        }
        else {
            answer += "박"; // 홀수 번째 (1, 3, 5...)
        }
    }

    return answer;
}

// 비주얼 스튜디오에서 확인하기 위한 메인 함수
int main() {
    int n;
    cout << "숫자를 입력하세요: ";
    cin >> n;

    string result = solution(n);
    cout << "결과: " << result << endl;

    return 0;
}