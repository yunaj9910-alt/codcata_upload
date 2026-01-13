#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    // n이 0이 될 때까지 반복
    while (n > 0) {
        // 1. 맨 끝자리 숫자를 추출해서 벡터에 추가 (예: 123 -> 3 추출)
        answer.push_back(n % 10);

        // 2. n에서 맨 끝자리를 제거 (예: 123 -> 12)
        n /= 10;
    }
    return answer;
}

int main()
{
    long long n = 12345; // 테스트할 숫자

    // solution 함수를 실행하고 결과를 result 변수에 저장
    vector<int> result = solution(n);

    // 결과 출력하기
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];

        // 마지막 숫자 뒤에는 쉼표를 붙이지 않기 위한 조건문
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}