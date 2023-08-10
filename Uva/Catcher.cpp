#include <iostream>
#include <vector>
using namespace std;
// Uva 00231 - testing the catcher
// here's some material i use to complete the code
// https://www.youtube.com/watch?v=CE2b_-XfVDk
// https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/

int main()
{
    int test = 0;
    while (true)
    {
        vector<int> inp;
        int num;
        int max_length = 0;

        while (cin >> num && num >= 0)
        {
            inp.push_back(num);
        }

        if (inp.empty())
        {
            break;
        }

        vector<int> DP(inp.size(), 1);

        for (int i = 1; i < inp.size(); i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (inp[i] < inp[j] && DP[i] < DP[j] + 1)
                {
                    DP[i] = DP[j] + 1;
                    if (DP[i] > max_length)
                    {
                        max_length = DP[i];
                    }
                }
            }
        }

        if (test > 0)
        {
            cout << endl;
        }

        test++;

        cout << "Test #" << test << ":" << endl;
        cout << "  maximum possible interceptions: " << max_length << endl;
    }

    return 0;
}
