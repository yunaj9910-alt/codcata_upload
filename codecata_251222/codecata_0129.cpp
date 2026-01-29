#include <iostream>
#include <vector>
#include <algorithm> // min_element 함수를 사용하기 위해 필요합니다.

using namespace std;

vector<int> solution(vector<int> arr) {
    // 1. 만약 배열의 크기가 1이라면, 하나를 지웠을 때 빈 배열이 되므로
    // 문제 조건에 따라 바로 -1을 담아 반환합니다.
    if (arr.size() <= 1) {
        return { -1 };
    }

    // 2. 가장 작은 숫자가 있는 '위치(반복자)'를 찾습니다.
    // min_element는 arr의 처음부터 끝까지 훑어서 가장 작은 값의 주소를 가져옵니다.
    auto it = min_element(arr.begin(), arr.end());

    // 3. 찾은 위치(it)에 있는 원소를 배열에서 삭제합니다.
    arr.erase(it);

    // 4. 최솟값이 제거된 배열을 반환합니다.
    return arr;
}

// 결과를 출력해서 확인하기 위한 메인 함수
int main() {
    // 예제 1: [4, 3, 2, 1]
    vector<int> arr1 = { 4, 3, 2, 1 };
    vector<int> result1 = solution(arr1);

    cout << "결과 1: ";
    for (int x : result1) cout << x << " "; // 예상 출력: 4 3 2
    cout << endl;

    // 예제 2: [10]
    vector<int> arr2 = { 10 };
    vector<int> result2 = solution(arr2);

    cout << "결과 2: ";
    for (int x : result2) cout << x << " "; // 예상 출력: -1
    cout << endl;

    return 0;
}