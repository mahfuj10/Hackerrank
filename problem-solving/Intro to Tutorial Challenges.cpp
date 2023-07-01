/*
 * Complete the 'introTutorial' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER V
 *  2. INTEGER_ARRAY arr
 */

int introTutorial(int v, vector<int> arr)
{
    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] == v)
        {
            return i;
        }
    }
    return 0;
}
