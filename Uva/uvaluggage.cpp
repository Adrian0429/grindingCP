#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

// algorithm reference https://www.youtube.com/watch?v=s6FhG--P7z0

bool canDivideEqually(const vector<int> &weights)
{
    int totalSum = 0;
    for (int weight : weights)
    {
        totalSum += weight;
    }

    if (totalSum % 2 != 0)
    {
        return false;
    }

    int halfSum = totalSum / 2;
    vector<bool> dp(halfSum + 1, false);
    dp[0] = true;

    for (int i : weights)
    {
        for (int j = halfSum; j >= i; j--)
        {
            dp[j] = dp[j] || dp[j - i];
        }
    }

    return dp[halfSum];
}

int main()
{
    int it;
    cin >> it;
    cin.ignore();

    while (it--)
    {
        string inp;
        getline(cin, inp);
        stringstream ss(inp);

        vector<int> weights;
        int k;
        while (ss >> k)
        {
            weights.push_back(k);
        }

        if (canDivideEqually(weights))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
