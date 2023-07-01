
/*
 * Complete the 'insertionSort2' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY arr
 */
void printArray(int n, vector<int> arr)
{
    for (int i = 0; i < n - 1; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << arr[n - 1] << endl;
}

void insertionSort2(int n, vector<int> arr)
{
    for (int i = 1; i < n; ++i)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
        printArray(n, arr);
    }
}
