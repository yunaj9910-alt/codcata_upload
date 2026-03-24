#include <iostream>
#include <vector>
#include <cmath> // sqrt 함수 사용을 위해 포함

using namespace std;

// 각 숫자의 약수의 개수를 효율적으로 구하는 함수
int getDivisorCount(int n) {
    int count = 0;
    int root = sqrt(n);

    for (int i = 1; i <= root; ++i) {
        if (n % i == 0) {
            count++; // i는 약수임이 확실함

            // i의 짝궁 약수(n / i)도 약수인지 체크 (단, n이 제곱수일 때 중복 카운트 방지)
            if (i != n / i) {
                count++;
            }
        }
    }
    return count;
}

// 프로그래머스 정답 제출용 solution 함수
int solution(int number, int limit, int power) {
    int totalWeight = 0;

    for (int i = 1; i <= number; ++i) {
        int divisorCount = getDivisorCount(i);

        if (divisorCount > limit) {
            totalWeight += power; // 제한 수치를 넘으면 지정된 power 더하기
        }
        else {
            totalWeight += divisorCount; // 안 넘으면 약수의 개수 더하기
        }
    }

    return totalWeight;
}

// 실행 및 출력을 확인하기 위한 메인 함수
int main() {
    // 입출력 예시 1
    int number1 = 5;
    int limit1 = 3;
    int power1 = 2;
    cout << "예제 1 결과: " << solution(number1, limit1, power1) << " (기댓값: 10)" << endl;

    // 입출력 예시 2
    int number2 = 10;
    int limit2 = 3;
    int power2 = 2;
    cout << "예제 2 결과: " << solution(number2, limit2, power2) << " (기댓값: 21)" << endl;

    return 0;
}