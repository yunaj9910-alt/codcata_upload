#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int idx1 = 0;
    int idx2 = 0;

    for (string word : goal)
    {
        if (idx1 < cards1.size() && cards1[idx1] == word)
        {
            idx1++;
        }
        else if (idx2 < cards2.size() && cards2[idx2] == word)
        {
            idx2++;
        }
        else
        {
            return "No";
        }
    }
    return "Yes";
}


int main()
{
    vector<string> c1 = { "i", "drink", "water" };
    vector<string> c2 = { "want", "to" };
    vector<string> g = { "i", "want", "to", "drink", "water" };

    cout << solution(c1, c2, g) << endl; // 결과: Yes

    vector<string> c1_2 = { "i", "water", "drink" };
    vector<string> c2_2 = { "want", "to" };
    vector<string> g_2 = { "i", "want", "to", "drink", "water" };

    cout << solution(c1_2, c2_2, g_2) << endl; // 결과: no
}