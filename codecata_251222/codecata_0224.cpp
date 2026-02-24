#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 위에서 작성한 솔루션 함수
int solution(vector<vector<int>> sizes) {
    int maxWidth = 0;
    int maxHeight = 0;

    for (const auto& card : sizes) {
        // card[0]과 card[1] 중 큰 값을 가로로, 작은 값을 세로로 간주
        maxWidth = max(maxWidth, max(card[0], card[1]));
        maxHeight = max(maxHeight, min(card[0], card[1]));
    }

    return maxWidth * maxHeight;
}

int main() {
    // 예제 1번 데이터: [[60, 50], [30, 70], [60, 30], [80, 40]]
    vector<vector<int>> test1 = { {60, 50}, {30, 70}, {60, 30}, {80, 40} };
    cout << "예제 1 결과: " << solution(test1) << " (기대값: 4000)" << endl;

    // 예제 2번 데이터: [[10, 7], [12, 3], [8, 15], [14, 7], [5, 15]]
    vector<vector<int>> test2 = { {10, 7}, {12, 3}, {8, 15}, {14, 7}, {5, 15} };
    cout << "예제 2 결과: " << solution(test2) << " (기대값: 120)" << endl;

    // 예제 3번 데이터: [[14, 4], [19, 6], [6, 16], [18, 7], [7, 11]]
    vector<vector<int>> test3 = { {14, 4}, {19, 6}, {6, 16}, {18, 7}, {7, 11} };
    cout << "예제 3 결과: " << solution(test3) << " (기대값: 133)" << endl;

    return 0;
}