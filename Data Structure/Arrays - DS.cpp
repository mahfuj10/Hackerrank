vector<int> reverseArray(vector<int> a)
{
    int size = a.size();
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    return a;
}
