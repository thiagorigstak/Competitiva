#include <bits/stdc++.h>
#define endl "\n"    // macro
#define ll long long // macro
#define desync                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;
int main()
{
    desync;
    int n, x, y;
    int md, num = 1, pr;
    int t1 = 1, t2 = -1;
    cin >> n >> x >> y;
    for (int i = 0; i < n; i++)
    {
        int x1, y1, p, mod, xs, ys;
        cin >> x1 >> y1 >> p;
        xs = x - x1;
        ys = y - y1;
        mod = abs(xs) + abs(ys);
        //cout << mod << endl;
        if (i == 0)
        {
            md = mod;
            pr = p;
            num = 1;
        }
        else if (md*2+pr > mod*2+p)
        {
            md = mod;
            num = i+1;
            pr = p;
        }
    }
    cout << md*2 + pr << " " << num << endl;
    return 0;
}