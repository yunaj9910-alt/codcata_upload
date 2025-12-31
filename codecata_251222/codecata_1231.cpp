#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    int answer = angle;
    if (0 < angle && angle < 90)
    {
        return 1;
    }
    else if (angle == 90)
    {
        return 2;
    }
    else if (90 < angle && angle < 180)
    {
        return 3;
    }
    else if (angle == 180)
    {
        return 4;
    }
    else{}
    return answer;
}

int main()
{
    cout << solution(70) << endl;
    cout << solution(91) << endl;
    cout << solution(180) << endl;
}

