#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long n = 0;
    unsigned long long m = 0;
    unsigned long long a = 0;
    unsigned long long res = 0;

    cin >> n >> m >> a;

    res = ceil((double)m / a) * ceil((double)n / a);
    cout << res << endl;
}