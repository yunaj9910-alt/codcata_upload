#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers)
{
	set<int> sum_set;

	for (int i = 0; i < numbers.size(); i++)
	{
		for (int j = i + 1; j < numbers.size(); j++)
		{
			sum_set.insert(numbers[i] + numbers[j]);
		}
	}

	vector<int> answer(sum_set.begin(), sum_set.end());
	return answer;
}

int main()
{
	/*vector<int>numbers = { 2,1,3,4,1 };

	vector<int>result = solution(numbers);

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i];
		if (i != result.size() - 1)
		{
			cout << ", ";
		}
	}*/

	vector <int> ex1 = { 2,1,3,4,1 };
	vector<int>res1 = solution(ex1);

	vector<int>ex2 = { 5,0,2,7 };
	vector<int>res2 = solution(ex2);

	for (int n : res1) cout << n << " " ;
	cout<<endl;
	for (int n : res2)cout << n << " ";
}