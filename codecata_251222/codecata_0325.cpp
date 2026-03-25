#include <string>
#include <vector>
#include <unordered_set>
#include <iostream>      
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    unordered_set<int> winSet(win_nums.begin(), win_nums.end());

    int zeros = 0;
    int matched = 0;

    for (int num : lottos) {
        if (num == 0) {
            zeros++;
        }
        else if (winSet.count(num)) {
            matched++;
        }
    }

    auto toRank = [](int cnt) -> int {
        if (cnt < 2) return 6;
        return 7 - cnt;
        };

    int bestRank = toRank(matched + zeros);
    int worstRank = toRank(matched);

    return { bestRank, worstRank };
}

int main() {
    // 테스트 케이스 1
    vector<int> lottos1 = { 44, 1, 0, 0, 31, 25 };
    vector<int> win_nums1 = { 31, 10, 45, 1, 6, 19 };
    vector<int> result1 = solution(lottos1, win_nums1);
    cout << "테스트 1 → 최고 순위: " << result1[0] << "등, 최저 순위: " << result1[1] << "등" << endl;

    // 테스트 케이스 2
    vector<int> lottos2 = { 0, 0, 0, 0, 0, 0 };
    vector<int> win_nums2 = { 38, 19, 20, 40, 15, 25 };
    vector<int> result2 = solution(lottos2, win_nums2);
    cout << "테스트 2 → 최고 순위: " << result2[0] << "등, 최저 순위: " << result2[1] << "등" << endl;

    // 테스트 케이스 3
    vector<int> lottos3 = { 45, 4, 35, 20, 3, 9 };
    vector<int> win_nums3 = { 20, 9, 3, 45, 4, 35 };
    vector<int> result3 = solution(lottos3, win_nums3);
    cout << "테스트 3 → 최고 순위: " << result3[0] << "등, 최저 순위: " << result3[1] << "등" << endl;

    return 0;
}