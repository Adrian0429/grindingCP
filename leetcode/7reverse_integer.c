#include <stdio.h>

int reverse(int num)
{
    long int rev_num = 0;
    if (num > 0)
    {
        while (num > 0)
        {
            rev_num = rev_num * 10 + num % 10;
            num = num / 10;
        }
    }
    else if (num < 0)
    {
        while (num < 0)
        {
            rev_num = rev_num * 10 + num % 10;
            num = num / 10;
        }
    }
    if (rev_num > INT_MAX || rev_num < INT_MIN)
    {
        return 0;
    }
    else
    {
        return rev_num;
    }
}