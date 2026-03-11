#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> hallOfFame;//명예의 전당 목록

    for (int s : score)
    {
        hallOfFame.push_back(s);

        sort(hallOfFame.begin(), hallOfFame.end(), greater<int>());

        if (hallOfFame.size() > k)
        {
            hallOfFame.pop_back();
        }
        answer.push_back(hallOfFame.back());
   }

    return answer;
}

int main()
{
    int k1 = 3;
    vector<int> example1 = { 10, 100, 20, 150, 1, 100, 200 };
    vector<int> result1 = solution(k1, example1);

    for (int i = 0; i < result1.size(); i++) {
        cout << result1[i] << (i == result1.size() - 1 ? "" : ", ");
    }

    cout << endl;
    int k2 = 4;
    vector<int> example2 = { 0, 300, 40, 300, 20, 70, 150, 50, 500, 1000 };
    vector<int> result2 = solution(k2, example2);

    for (int i = 0; i < result2.size(); i++) {
        cout << result2[i] << (i == result2.size() - 1 ? "" : ", ");
    }
}
