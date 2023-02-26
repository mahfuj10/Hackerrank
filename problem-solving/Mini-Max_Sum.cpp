void miniMaxSum(vector<int> arr)
{
    long max = arr[0];
    long min = arr[0];
    long sum = 0;

    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
        sum += arr[i];
    }

    long maxSum = sum - min;
    long minSum = sum - max;

    cout << minSum << " " << maxSum;
}