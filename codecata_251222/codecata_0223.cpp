#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int t_len = t.length();
    int p_len = p.length();
    long long p_num = stoll(p); // p를 숫자로 미리 변환 (최대 18자리이므로 long long)

    // t에서 p의 길이만큼씩 잘라서 비교
    // i가 t_len - p_len까지만 가야 범위를 벗어나지 않음
    for (int i = 0; i <= t_len - p_len; i++) {
        string sub = t.substr(i, p_len); // i번째 인덱스부터 p_len개만큼 추출
        long long sub_num = stoll(sub);  // 추출한 부분 문자열을 숫자로 변환

        if (sub_num <= p_num) {
            answer++;
        }
    }

    return answer;
}

int main() {
    // 테스트 케이스 실행
    cout << solution("3141592", "271") << endl;    // 예상 결과: 2
    cout << solution("500220839878", "7") << endl; // 예상 결과: 8
    cout <<solution("10203", "15") << endl;       // 예상 결과: 3

    return 0;
}