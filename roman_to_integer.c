int convert(char string)
{
    switch (string)
    {
    case 'M':
        return 1000;
        break;

    case 'D':
        return 500;
        break;

    case 'C':
        return 100;
        break;

    case 'L':
        return 50;
        break;

    case 'X':
        return 10;
        break;

    case 'V':
        return 5;
        break;

    case 'I':
        return 1;
        break;
    default:
        return -1;
    }
}

int romanToInt(char *s)
{
    int length = strlen(s);
    int sum = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (convert(s[i]) < convert(s[i + 1]))
        {
            sum = sum - convert(s[i]);
        }
        else
        {
            sum += convert(s[i]);
        }
    }

    return sum;
}