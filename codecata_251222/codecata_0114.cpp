#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    bool isNegative = false;

    if (s[0] == '-')
    {
        isNegative = true;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            answer = answer * 10 + (s[i] - '0');
        }
    }

    if (isNegative)
    {
        answer *= -1;
    }
   
    return answer;
}

int main()
{
    cout << solution("1234") << endl;
    cout << solution("-1234") << endl;
}