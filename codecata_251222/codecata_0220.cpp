#include <iostream>
#include <vector>

using namespace std;

// 문제에서 제공된 솔루션 함수
int solution(vector<int> number) {
    int answer = 0;
    int n = number.size();

    // 3중 반복문을 이용한 조합 탐색 (nC3)
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (number[i] + number[j] + number[k] == 0) {
                    answer++;
                }
            }
        }
    }

    return answer;
}

int main() {
    // 입출력 예시 1
    vector<int> ex1 = { -2, 3, 0, 2, -5 };
    cout << "예제 1 결과: " << solution(ex1) << " (기댓값: 2)" << endl;

    // 입출력 예시 2
    vector<int> ex2 = { -3, -2, -1, 0, 1, 2, 3 };
    cout << "예제 2 결과: " << solution(ex2) << " (기댓값: 5)" << endl;

    // 입출력 예시 3
    vector<int> ex3 = { -1, 1, -1, 1 };
    cout << "예제 3 결과: " << solution(ex3) << " (기댓값: 0)" << endl;

    return 0;
}