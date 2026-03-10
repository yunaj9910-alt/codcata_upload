#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    while (n >= a)
    {
        int new_cola = (n / a) * b;

        answer += new_cola;

        n = (n % a) + new_cola;
    }
    return answer;
}

int main()
{
    cout << solution(2, 1, 20) << endl;
    cout << solution(3, 1, 20) << endl;
}