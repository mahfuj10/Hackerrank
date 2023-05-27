
// Add your code here
Difference(vector<int> arr)
{
    elements = arr;
    sort(elements.begin(), elements.end());
};

void computeDifference()
{
    maximumDifference = elements[elements.size() - 1] - elements[0];
}
