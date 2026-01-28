#include <iostream>
#include <vector>
#include <numeric> // accumulate 함수를 사용하기 위함

using namespace std;

int solution(vector<int> numbers) {
    int total_sum = 45; // 0~9까지의 총합
    int current_sum = 0;

    // numbers 배열의 모든 원소를 더함
    for (int num : numbers) {
        current_sum += num;
    }

    // 전체 합에서 현재 배열의 합을 뺀 결과를 반환
    return total_sum - current_sum;
}

int main()
{
    vector<int> numbers = { 1, 2, 3, 4, 6, 7, 8, 0 };
    cout << solution(numbers) << endl;

    vector<int> numbers2 = { 5, 8, 4, 0, 6, 7, 9 };
    cout << solution(numbers2) << endl;
}