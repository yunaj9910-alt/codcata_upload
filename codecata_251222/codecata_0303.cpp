#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int>solution(vector<int>array, vector<vector<int>>commands)
{
	vector<int> answer;

	for (int c = 0; c < commands.size(); c++)
	{
		int i = commands[c][0];
		int j = commands[c][1];
		int k = commands[c][2];

		vector<int>temp;
		for (int m = i - 1; m < j; m++)
		{
			temp.push_back(array[m]);
		}

		sort(temp.begin(), temp.end());

		answer.push_back(temp[k - 1]);
	}

	return answer;
}

int main()
{
	vector<int>array = { 1, 5, 2, 6, 3, 7, 4 };
	vector<vector<int>>commands = { {2,5,3}, {4, 4,1}, {1,7,3} };

	vector<int>result = solution(array, commands);

	for (int x : result) printf("%d", x);
}