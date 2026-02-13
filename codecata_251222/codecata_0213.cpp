#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> ternary; // 3진법 숫자를 담을 저장소

    // 1단계: 10진법 n을 3진법으로 변환하며 '뒤집어서' 저장하기
    // n을 3으로 나눈 나머지를 저장하면 결과적으로 뒤집힌 순서가 됩니다.
    while (n > 0) {
        ternary.push_back(n % 3); // 3으로 나눈 나머지(0,1,2)를 벡터에 추가
        n /= 3;                   // n을 3으로 나눈 몫으로 갱신
    }

    // 2단계: 뒤집힌 3진법 배열을 다시 10진법으로 계산하기
    // 배열의 마지막 요소부터 차례대로 3의 0승, 1승, 2승...을 곱해줍니다.
    long long power = 1; // 3의 거듭제곱을 저장할 변수 (3^0 = 1부터 시작)

    // 뒤에서부터 순회하며 10진수 값을 누적합니다.
    for (int i = ternary.size() - 1; i >= 0; i--) {
        answer += (ternary[i] * power); // 현재 자릿수 값 * 3의 거듭제곱
        power *= 3;                     // 다음 자릿수를 위해 3을 곱함
    }

    return answer;
}

// 코드를 실행해보기 위한 메인 함수
int main() {
    int n1 = 45;
    int n2 = 125;

    cout << "입력: 45 -> 결과: " << solution(n1) << " (기댓값: 7)" << endl;
    cout << "입력: 125 -> 결과: " << solution(n2) << " (기댓값: 229)" << endl;

    return 0;
}