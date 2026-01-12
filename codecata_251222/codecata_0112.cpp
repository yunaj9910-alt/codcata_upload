#include <iostream>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;

    // 1부터 n까지 반복하며 x의 배수를 구함
    for (int i = 1; i <= n; i++) {
        // x가 int 범위를 넘을 수 있으므로 long long으로 형변환하여 계산
        answer.push_back((long long)x * i);
    }

    return answer;
}

void print_result(vector<long long> result) {
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) cout << ", "; // 마지막 요소가 아니면 쉼표 출력
    }
    cout << "]" << endl;
}

int main() {
    vector<long long> res1 = solution(2, 5);
    print_result(res1); // 출력: [2, 4, 6, 8, 10]

    // 2번 예시: x=4, n=3
    vector<long long> res2 = solution(4, 3);
    print_result(res2); // 출력: [4, 8, 12]

    // 3번 예시: x=-4, n=2
    vector<long long> res3 = solution(-4, 2);
    print_result(res3); // 출력: [-4, -8]
    return 0;
}