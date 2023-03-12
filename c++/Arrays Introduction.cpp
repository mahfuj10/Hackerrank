#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x;
    cin >> x;

    int y[x];

    for (int i = 0; i < x; i++)
    {
        cin >> y[i];
    }

    for (int i = x - 1; i >= 0; i--)
    {
        cin >> y[i];
        cout << y[i] << " ";
    }

    return 0;
}
