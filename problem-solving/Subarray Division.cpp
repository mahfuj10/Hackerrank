/*
 * Complete the 'birthday' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY s
 *  2. INTEGER d
 *  3. INTEGER m
 */

int birthday(vector<int> s, int d, int m)
{
    int size = s.size();
    int count = 0;

    for (int i = 0; i < size; ++i)
    {
        int sum = 0;
        for (int j = i; j < m + i; ++j)
        {
            sum += s[j];
        }
        if (sum == d)
            count++;
    }

    return count;
}
