#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    // std::sort의 세 번째 인자에 비교 규칙(람다 식)을 넣습니다.
    sort(strings.begin(), strings.end(), [n](string a, string b) {
        // 1. n번째 글자가 다르면, n번째 글자를 기준으로 오름차순 정렬
        if (a[n] != b[n]) {
            return a[n] < b[n];
        }
        // 2. n번째 글자가 같으면, 문자열 전체를 사전순으로 오름차순 정렬
        return a < b;
        });

    return strings;
}

int main()
{
    vector<string>ex1 = { "sun", "bed", "car" };
    int n1 = 1;
    vector<string>result1 = solution(ex1, n1);

    for (const string& s : result1)
    {
        cout << s << " ";
    }
    cout << "\n";

    vector<string>ex2 = { "abce", "abcd", "cdx" };
    int n2 = 2;
    vector<string>result2 = solution(ex2, n2);

    for (const string& s : result2)
    {
        cout << s << " ";
    }
    cout << "\n";
}