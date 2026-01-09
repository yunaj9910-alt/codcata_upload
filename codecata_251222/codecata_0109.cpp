#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
  
    for (int x = 1; x < n; x++)
        {
         if (n % x == 1)
          {
             return x;
          }
                
    }
        
}

int main()
{
    cout << solution(10) << endl;
    cout << solution(12) << endl;
}