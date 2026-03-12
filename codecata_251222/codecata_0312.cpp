#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    //string answer = "";
    int monthDays[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    string dayName[]={ "FRI","SAT","SUN","MON","TUE","WED","THU" };

    int totalDays = 0;

    for (int i = 0; i < a - 1; i++)
    {
        totalDays += monthDays[i];
    }

    totalDays += (b - 1);
    return dayName[totalDays % 7];
}

int main()
{
    int a = 5;
    int b = 24;

    string result = solution(a, b);

    cout << result << endl;

    return 0;
}