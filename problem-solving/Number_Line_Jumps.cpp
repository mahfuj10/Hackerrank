#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

string kangaroo(int x1, int v1, int x2, int v2)
{
    int h = x1 - x2;
    if (v1 > v2 && h % (v1 - v2) == 0)
        return "YES";
    return "NO";
}