#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{

    int data[] = {a, b, c, d};
    int max = data[0];
    for (int i = 0; i < 4; ++i)
    {
        if (max < data[i])
        {
            max = data[i];
        };
    }

    return max;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
