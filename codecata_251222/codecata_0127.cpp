#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int len = phone_number.length();

    for (int i = 0; i < len - 4; i++)
    {
        phone_number[i] = '*';
   }

    return phone_number;
}

int main()
{
    cout << solution("01033334444") << endl;
    cout << solution("02777888") << endl;
}