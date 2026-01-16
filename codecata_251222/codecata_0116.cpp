#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // sort를 사용하기 위해 추가
#include <functional> // greater를 사용하기 위해 추가

using namespace std;

long long solution(long long n) {
    string s = to_string(n);
    sort(s.begin(), s.end(), greater<char>());
    long long answer = stoll(s);
    return answer;
}

int main()
{
    cout << solution(118372) << endl;
}