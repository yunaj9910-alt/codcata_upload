#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
   
    if (num1 == num2) {
        return 1;  // 같으면 1을 반환
    }
    else {
        return -1; // 다르면 -1을 반환
    }
}

int main()
{
    cout << solution(2, 3) << endl;
    cout << solution(11, 11) << endl;
    cout << solution(7, 99) << endl;
}
