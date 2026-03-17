#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int>solution(vector<int>answers)
{
	vector<int>answer;

	vector<int> p1 = { 1,2,3,4,5 };
	vector<int> p2 = { 2,1,2,3,2,4,2,5 };
	vector<int> p3 = { 3,3,1,1,2,2,4,4,5,5 };

	vector<int> score = { 0,0,0 };

	for (int i = 0; i < answers.size(); i++)
	{
		if (answers[i] == p1[i % p1.size()])score[0]++;
		if (answers[i] == p2[i % p2.size()])score[1]++;
		if (answers[i] == p3[i % p3.size()])score[2]++;
	}

	int max_score = *max_element(score.begin(), score.end());

	for (int i = 0; i < 3; i++) {
		if (score[i] == max_score) {
			answer.push_back(i + 1); // 인덱스는 0부터 시작하므로 +1 해줌
		}
	}

	return answer;
}


int main()
{
	vector<int> test_answers = { 1,2,3,4,5 };

	// 함수 호출
	vector<int> result = solution(test_answers);

	// 결과 출력 루프
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
	cout << endl;

	vector<int> test_answers_2 = { 1, 3, 2, 4, 2 };
	vector<int> result_2 = solution(test_answers_2);

	for (int i = 0; i < result_2.size(); i++) {
		cout << result_2[i] << " ";
	}
	return 0;
}