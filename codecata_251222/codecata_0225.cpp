#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 작성한 솔루션 함수
string solution(string s, int n) {
    string answer = "";
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c >= 'A' && c <= 'Z') {
            answer += (c - 'A' + n) % 26 + 'A';
        }
        else if (c >= 'a' && c <= 'z') {
            answer += (c - 'a' + n) % 26 + 'a';
        }
        else {
            answer += c;
        }
    }
    return answer;
}

int main() {
    // 테스트 케이스들
    string s1 = "AB";
    int n1 = 1;
    cout << solution(s1, n1) << endl;

    string s2 = "z";
    int n2 = 1;
    cout << solution(s2, n2) <<  endl;

    string s3 = "a B z";
    int n3 = 4;
    cout << solution(s3, n3) << endl;

    return 0;
}