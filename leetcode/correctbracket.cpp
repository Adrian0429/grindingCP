#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

bool isvalid(string s)
{
        stack<char> st;

        for (int i = 0; i < s.length(); i++)
        {
            char cur = s[i];
            if (cur == '(' || cur == '{' || cur == '[')
            {
                st.push(cur);
            }

            else
            {
                if (!st.empty())
                {
                    char top = st.top();
                    if ((cur == ')' && top == '(') ||
                        (cur == '}' && top == '{') ||
                        (cur == ']' && top == '['))
                    {
                        // if matches then pop
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        if (st.empty())
        {
            return true;
        }
        return false;
}

int main()
{
    string st;
    isvalid(st);
}