#include <stdio.h>
#include <string.h>

long long int ans[10000];
int coins[21] = {1, 8, 27, 64, 125, 216, 343, 512, 729,
                 1000, 1331, 1728, 2197, 2744, 3375, 4096,
                 4913, 5832, 6859, 8000, 9261};

int main()
{

    int i, j;
    memset(ans, 0, sizeof(ans));
    ans[0] = 1;

    for (i = 0; i < 21; i++)
    {
        for (j = 1; j < 10000; j++)
        {
            if (j >= coins[i])
            {
                ans[j] += ans[j - coins[i]];
            }
        }
    }

    while (scanf("%d", &i) == 1)
        printf("%llu\n", ans[i]);
    return 0;
}