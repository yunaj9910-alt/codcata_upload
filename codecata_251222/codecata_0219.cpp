#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int idx = 0; // 단어별 인덱스를 추적할 변수

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            idx = 0; // 공백을 만나면 인덱스 초기화
            continue;
        }

        // 짝수번째는 대문자로, 홀수번째는 소문자로 변환
        if (idx % 2 == 0) {
            s[i] = toupper(s[i]);
        }
        else {
            s[i] = tolower(s[i]);
        }

        idx++; // 글자일 때만 인덱스 증가
    }

    return s;
}

int main()
{
    cout << solution("try hello world") << endl;
}
