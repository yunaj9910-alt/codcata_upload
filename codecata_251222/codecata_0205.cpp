#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // sort 사용
#include <functional> // greater 사용

using namespace std;

string solution(string s) {
    
    sort(s.begin(), s.end(), greater<char>());
    
    return s;
}

int main()
{
    cout << solution("Zbcdefg") << endl;
}