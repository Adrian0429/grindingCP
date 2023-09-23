class Solution
{
public:
    int Solve(int n, vector<int> &dp)
    {
        if (n <= 2)
        {
            return n;
        }

        if (dp[n] != 0)
        {
            return dp[n];
        }

        dp[n] = Solve(n - 1, dp) + Solve(n - 2, dp);
        return dp[n];
    }

    int climbStairs(int n)
    {

        if (n <= 2)
        {
            return n;
        }

        vector<int> dp(n + 1);

        for (int i = 0; i <= n; i++)
        {
            dp[i] = 0;
        }
        return Solve(n, dp);
    }
};