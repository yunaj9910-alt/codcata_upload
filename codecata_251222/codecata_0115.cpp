#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long x = static_cast<long long>(sqrt(n));

    if (x * x == n)
    {
        return(x + 1) * (x + 1);
    }
    else
    {
        return -1;
    }
}

int main()
{
    cout << solution(121) << endl;
    cout << solution(3) << endl;
}