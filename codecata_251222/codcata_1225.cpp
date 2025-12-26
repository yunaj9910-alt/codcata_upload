#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int age) {
	int answer = 2022 - age + 1;
	return answer;
}
int main()
{
	cout << solution (40) << endl;
	cout << solution(23) << endl;
}