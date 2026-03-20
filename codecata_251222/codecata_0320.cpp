#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int last_painted = 0; // 마지막으로 페인트가 칠해진 위치 (구역 번호)

    for (int s : section) {
        // 현재 칠해야 할 구역(s)이 마지막으로 칠한 범위보다 뒤에 있다면
        if (s > last_painted) {
            answer++; // 롤러질 횟수 추가
            // 현재 구역부터 롤러 길이(m)만큼 칠함
            // s번 구역부터 칠하면 (s + m - 1)번 구역까지 커버됨
            last_painted = s + m - 1;
        }
    }
    return answer;
}

int main()
{
    cout << solution(8, 4, { 2,3,6 }) << endl;
    cout << solution(5, 4, { 1,3 }) << endl;
    cout << solution(4, 1, { 1,2,3,4 }) << endl;
}