#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    
    // 1. 처음부터 1인 경우 0 반환
    if (num == 1) 
        return 0;

    // 2. 계산 과정에서 숫자가 커질 수 있으므로 long long 사용
    long long n = num;
    int answer = 0;

    // 3. 1이 아닐 때까지 반복
    while (n != 1) {
        // 4. 500번 넘게 반복하면 -1 반환
        if (answer >= 500) return -1;

        if (n % 2 == 0) {
            n /= 2;        // 짝수일 때
        }
        else {
            n = n * 3 + 1; // 홀수일 때
        }

        answer++; // 횟수 증가
    }
    return answer;
}

int main()
{
    cout << solution(6) << endl;
    cout << solution(16) << endl;
    cout << solution(626331) << endl;
}