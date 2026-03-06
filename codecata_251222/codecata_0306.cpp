#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s)
{
	vector<int>answer;
	int last_pos[26];
	fill_n(last_pos, 26, -1);

	for (int i = 0; i < s.length(); i++)
	{
		int char_idx = s[i] - 'a';

		if (last_pos[char_idx] == -1)
		{
			answer.push_back(-1);
		}
		else
		{
			answer.push_back(i - last_pos[char_idx]);
		}
		last_pos[char_idx] = i;
	}

	return answer;
}

int main()
{
	// 1. 테스트 케이스 준비
	string test_s1 = "banana";
	string test_s2 = "foobar";

	// 2. 함수 호출 및 결과 저장
	vector<int> result1 = solution(test_s1);
	vector<int> result2 = solution(test_s2);

	// 3. 결과 출력 (첫 번째 예시)
	cout << "Test 1 (banana): ";
	for (int val : result1) {
		cout << val << " ";
	}
	cout << endl;

	// 4. 결과 출력 (두 번째 예시)
	cout << "Test 2 (foobar): ";
	for (int val : result2) {
		cout << val << " ";
	}
	cout << endl;

	return 0;
}