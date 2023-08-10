#include <stdio.h>


void Pattern(long long int k)
{
    int m = 0;
    long long int Sn = 0;
    int n = 1;
    //finding the 'n' value using s(n)
    while (Sn + n + 1 <= k)
    {
        Sn = (n * (n + 1)) / 2;
        n++;
    }
    m = (k - (n * (n - 1)) / 2) - 1;
    printf("%d %d\n", m, n);
}

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        /* code */
        long long int k;
        scanf("%lld", &k);
        Pattern(k);
    }
        
    return 0;
}