#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> can = { "aya", "ye", "woo", "ma" };

    for (string s : babbling) {
        bool is_valid = true;

        for (string c : can) {
            // 연속된 발음 검사
            if (s.find(c + c) != string::npos) {
                is_valid = false;
                break;
            }
        }

        if (is_valid) {
            for (string c : can) {
                size_t pos = s.find(c);
                while (pos != string::npos) {
                    s.replace(pos, c.length(), " "); // 공백(" ")으로 치환
                    pos = s.find(c);
                }
            }

            bool all_empty = true;
            for (char ch : s) {
                if (ch != ' ') {
                    all_empty = false;
                    break;
                }
            }

            if (all_empty) {
                answer++;
            }
        }
    }

    return answer;
}

int main() {
    // 입출력 예 2번 테스트 데이터
    vector<string> babbling = { "ayaye", "uuu", "yeye", "yemawoo", "ayaayaa" };

    int result = solution(babbling);

    cout << "발음할 수 있는 단어의 개수: " << result << endl; // 출력: 2

    return 0;
}