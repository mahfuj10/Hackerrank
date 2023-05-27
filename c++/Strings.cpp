#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Complete the program
    string a, b;
    cin >> a >> b;
    int asize = a.size();
    int bsize = b.size();

    string c = a + b;

    cout << asize << " " << bsize << endl;
    cout << c << endl;

    char c1 = a[0];
    char c2 = b[0];

    a[0] = c2;
    b[0] = c1;

    cout << a << " " << b << endl;

    return 0;
}