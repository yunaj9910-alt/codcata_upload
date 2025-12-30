#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
	float answer = (float)num1 / num2*1000;
	return answer;
}

int main()
{
	cout << solution(3, 2) << endl;
	cout << solution(7, 3) << endl;
	cout << solution(1, 16) << endl;
}