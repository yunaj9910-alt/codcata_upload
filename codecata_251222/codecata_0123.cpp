#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % divisor == 0)
        {
            answer.push_back(arr[i]);
        }
    }

    if (answer.empty()) {
        answer.push_back(-1);
    }
   
    else {
        sort(answer.begin(), answer.end());
    }
    return answer;
}

int main()
{
    vector<int> res1 = solution({ 5, 9, 7, 10 }, 5);
    for (int n : res1) cout << n << " "; // 출력: 5 10
    cout << endl;

    vector<int> res2 = solution({ 2, 36, 1, 3 }, 1);
    for (int n : res2) cout << n << " "; // 출력: 1 2 3 36
    cout << endl;

    vector<int> res3 = solution({ 3, 2, 6 }, 10);
    for (int n : res3) cout << n << " "; // 출력: -1
    cout << endl;
}