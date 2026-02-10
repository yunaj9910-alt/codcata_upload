#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    // 1. 행과 열의 크기 구하기
    int rows = arr1.size();
    int cols = arr1[0].size();

    // 2. 결과 행렬 answer를 arr1과 같은 크기로 초기화
    // vector<int>(cols)는 열의 크기만큼 공간을 만듭니다.
    vector<vector<int>> answer(rows, vector<int>(cols));

    // 3. 이중 반복문을 이용해 각 원소 더하기
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            answer[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    return answer;
}

int main()
{
    vector<vector<int>> arr1 = { {1, 2}, {2, 3} };
    vector<vector<int>> arr2 = { {3, 4}, {5, 6} };
    vector<vector<int>> result = solution(arr1, arr2);

    
    for (const auto& row : result) { // 각 행(vector<int>)을 가져옴
        cout << "  [ ";
        for (int val : row) {        // 행 내부의 각 원소를 가져옴
            cout << val << "  ";
        }
        cout << "]" << endl;
    }
    

    arr1 = { {1}, {2} };
    arr2 = { {3}, {4} };
    result = solution(arr1, arr2);

 
    for (const auto& row : result) { // 각 행(vector<int>)을 가져옴
        cout << "  [ ";
        for (int val : row) {        // 행 내부의 각 원소를 가져옴
            cout << val << "  ";
        }
        cout << "]" ;
    }
   
}