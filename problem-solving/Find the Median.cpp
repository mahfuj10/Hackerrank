
/*
 * Complete the 'findMedian' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int findMedian(vector<int> arr)
{
    int i, j, size = arr.size();
    for (i = 0; i < size; ++i)
    {
        int current = arr[i];
        j = i - 1;
        while (current < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    int mid = 0 + ((size - 1) - 0) / 2;

    return arr[mid];
}