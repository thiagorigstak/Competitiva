#include <bits/stdc++.h>

#define endl "\n" // macro

#define ll long long // macro

#define ull unsigned long long

#define desync                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;

ull n, m;

int main()
{
    char c;
    desync;

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= m; j++)
        {
            cin >> c;
            if (c == '.')
            {
                if (i % 2 == 0)
                { // linha par
                    if (j % 2 == 0)
                    { // coluna par
                        cout << 'B';
                    }
                    else
                    { // coluna impar
                        cout << 'W';
                    }
                }
                else
                { // linha impar
                    if (j % 2 == 0)
                    { // coluna par
                        cout << 'W';
                    }
                    else
                    { // coluna impar
                        cout << 'B';
                    }
                }
            }else{// c == '-'
                cout << '-';
            }
        }
        cout << endl;
    }
    return 0;
}