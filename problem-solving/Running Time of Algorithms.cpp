/*
 * Complete the 'runningTime' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int runningTime(vector<int> arr)
{
    int counter = 0, size = arr.size(), i, j;
    for (i = 1; i < size; ++i)
    {
        int current = arr[i];
        j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            counter++;
            j--;
        }
        arr[j + 1] = current;
    }
    return counter;
}
