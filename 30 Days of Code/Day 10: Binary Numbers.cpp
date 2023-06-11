#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

string decToBin(int n)
{
    string s;
    while (n != 0)
    {
        s = ((n % 2) == 0 ? "0" : "1") + s;
        n /= 2;
    }
    return s;
}

int consOnes(string r, int size)
{
    int max = 0, p = 0;
    for (int i = 0; i < size; ++i)
    {
        if (r.substr(i, 1) == "1")
        {
            p++;
            if (p > max)
            {
                max = p;
            }
        }
        else
        {
            p = 0;
        };
    };
    return max;
};

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    string s = decToBin(n);
    cout << consOnes(s, s.length());

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
