#include <iostream>
#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    double sum = 0; 
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }

    answer = sum / numbers.size();

    return answer;
}

int main() {
   
    vector<int> ex1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<int> ex2 = { 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99 };

  
    cout << "예제 1번 결과: " << solution(ex1) << endl; 
    cout << "예제 2번 결과: " << solution(ex2) << endl; 

    return 0;
}