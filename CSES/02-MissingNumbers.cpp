#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long int x, y = 0, z;
    cin >> x;
    z = (x * (x + 1) / 2);
    while (--x)
    {
        int j;
        cin >> j;
        y += j;
    }
    cout << z - y << endl;
    return 0;
}