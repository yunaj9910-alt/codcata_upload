#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    int start = min(a, b);
    int end = max(a, b);

    long long answer = 0;

    for (int i = start; i <= end; ++i)
    {
        answer += i;
    }
    return answer;
}

int main()
{
    cout << solution(3, 5) << endl;
    cout << solution(3, 3) << endl;
    cout << solution(5, 3) << endl;
}