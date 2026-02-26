#include <iostream>
#include <string>
#include <vector>
#include <regex>
using namespace std;

int solution(string s) {
    vector<string>word = {
        "zero", "one","two", "three", "four","five","six", "seven", "eight", "nine"
    };

    for (int i = 0; i < 10; i++)
    {
        s = regex_replace(s, regex(word[i]), to_string(i));
    }
    return stoi(s);
}

int main()
{
    cout << solution("one4seveneight") << endl;
    cout << solution("23four5six7") << endl;
    cout << solution("2three45sixseven") << endl;
    cout << solution("123") << endl;
}