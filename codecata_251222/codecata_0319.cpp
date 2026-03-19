#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

// 소수 판별 함수: n이 소수이면 true, 아니면 false 반환
bool isPrime(int n) {
    if (n < 2) return false;
    // 효율성을 위해 제곱근까지만 반복
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    int n = nums.size();

    // 3개의 숫자를 중복 없이 고르는 3중 반복문
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = nums[i] + nums[j] + nums[k];
                if (isPrime(sum)) {
                    answer++;
                }
            }
        }
    }

    return answer;
}

int main() {
    // 입출력 예 #1
    vector<int> nums1 = { 1, 2, 3, 4 };
    cout << solution(nums1) <<  endl;

    // 입출력 예 #2
    vector<int> nums2 = { 1, 2, 7, 6, 4 };
    cout << solution(nums2) << endl;

    return 0;
}