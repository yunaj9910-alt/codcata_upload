#include <iostream>
#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    for (int i = 0; i < arr.size(); i++) {
        answer += arr[i];
    }
    return answer/arr.size();
}

int main()
{
    vector <int> arr1 = { 1, 2, 3, 4 };
    double answer = solution(arr1);
    cout << answer << endl;

    vector<int>arr2 = { 5, 5 };
    cout << solution(arr2)<<endl;
  
}