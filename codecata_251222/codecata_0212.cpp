#include <iostream>
#include <string>
#include <vector>
#include <numeric> // std::gcd, std::lcm 사용
#include <algorithm> // swap 함수를 사용하기 위해 포함

using namespace std;

int get_gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

vector<int> solution(int n, int m) {
    // 1. 최대공약수 구하기
    int g = get_gcd(n, m);

    // 2. 최소공배수 구하기
    // (n * m) / g 와 같지만, n을 g로 먼저 나누어 숫자가 커지는(오버플로우) 것을 방지합니다.
    long long l = (long long)(n / g) * m;

    // 3. 배열 형식으로 반환
    return { (int)g, (int)l };
}

int main()
{
    vector<int> res1 = solution(3, 12);
    vector<int> res2 = solution(2, 5);

    cout << "[" << res1[0] << ", " << res1[1] << "]" << endl; // 결과: [3, 12]
    cout << "[" << res2[0] << ", " << res2[1] << "]" << endl; // 결과: [1, 10]
}