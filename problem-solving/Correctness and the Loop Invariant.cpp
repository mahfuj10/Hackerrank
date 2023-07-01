void insertionSort(int N, int arr[])
{
    int i, j;

    for (i = 1; i < N; i++)
    {
        int current = arr[i];
        j = i - 1;
        while (j >= 0 && current < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    for (j = 0; j < N; j++)
    {
        printf("%d", arr[j]);
        printf(" ");
    }
}