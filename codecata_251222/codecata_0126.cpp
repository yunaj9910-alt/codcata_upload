#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 문제 풀이 함수
int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;

    for (int i = 0; i < absolutes.size(); i++) {
        // signs[i]가 참이면 더하고, 거짓이면 뺍니다.
        if (signs[i]) {
            answer += absolutes[i];
        }
        else {
            answer -= absolutes[i];
        }
    }

    return answer;
}

int main() {
    // 예시 1 데이터 준비
    vector<int> abs1 = { 4, 7, 12 };
    vector<bool> signs1 = { true, false, true };

    // 예시 2 데이터 준비
    vector<int> abs2 = { 1, 2, 3 };
    vector<bool> signs2 = { false, false, true };

    // 결과 출력
    cout << "테스트 케이스 1 결과: " << solution(abs1, signs1) << " (기대값: 9)" << endl;
    cout << "테스트 케이스 2 결과: " << solution(abs2, signs2) << " (기대값: 0)" << endl;

    return 0;
}