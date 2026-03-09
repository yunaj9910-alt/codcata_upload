#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 문제 해결 함수
string solution(vector<int> food) {
    string left_side = "";

    // 1. 음식 배치 생성 (1번 음식부터 순회)
    for (int i = 1; i < food.size(); i++) {
        int count = food[i] / 2; // 한 선수가 먹을 개수 계산
        for (int j = 0; j < count; j++) {
            left_side += to_string(i); // 음식 번호를 문자열로 추가
        }
    }

    // 2. 왼쪽 배치 + 물(0) + 왼쪽 배치를 뒤집은 것
    string right_side = left_side;
    reverse(right_side.begin(), right_side.end());

    return left_side + "0" + right_side;
}

// 출력을 위한 메인 함수
int main() {
    // 입출력 예시 1번
    vector<int> example1 = { 1, 3, 4, 6 };
    cout << "예시 1 결과: " << solution(example1) << endl; // 예상: "1223330333221"

    // 입출력 예시 2번
    vector<int> example2 = { 1, 7, 1, 2 };
    cout << "예시 2 결과: " << solution(example2) << endl; // 예상: "111303111"

    return 0;
}