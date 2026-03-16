#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score)
{
	int answer = 0;

	sort(score.begin(), score.end(), greater<int>());

	for (int i = m - 1; i < score.size(); i += m)
	{
		answer += score[i] * m;
	}
	return answer;
}

int main()
{
	cout << solution(3, 4, { 1, 2, 3, 1, 2, 3, 1 }) << endl;
	cout << solution(4, 3, { 4, 1, 2, 2, 4, 4, 4, 4, 1, 2, 4, 2 }) << endl; 

	return 0;
}