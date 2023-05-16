#include <bits/stdc++.h>
#define endl "\n"    // macro
#define ll long long // macro
#define pii pair<int, int>
#define desync                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;

int main()
{
    desync;
    int n, c, b; // n = caminhoes, c = caixas em U, b = capacidade da caixa
    int v = 0, x, carr;
    queue<pii> caminhao;
    cin >> n >> c >> b;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        caminhao.push(make_pair(x, 1));
    }
    int i = 0;
    while (!caminhao.empty())
    {
        if (i < n)
        {
            cin >> x;
            if (x == 0)
            {
                v += caminhao.front().first;
            }
            else
            {
                if (c == 0 and caminhao.front().second == 1)
                {
                    caminhao.push(make_pair(caminhao.front().first, 2));
                }
                else
                {
                    if (c > 0)
                    {
                        carr = caminhao.front().first;
                        while (carr >= b and c > 0)
                        {
                            c -= 1;
                            carr -= b;
                        }
                    }
                }
            }
            caminhao.pop();
            while (v >= b)
            {
                c += 1;
                v -= b;
            }
            i++;
        }
        else
        {
            if (c == 0 and caminhao.front().second == 1)
            {
                caminhao.push(make_pair(caminhao.front().first, 2));
            }
            else
            {
                if (c > 0)
                {
                    carr = caminhao.front().first;
                    while (carr >= b and c > 0)
                    {
                        c -= 1;
                        carr -= b;
                    }
                }
            }
            caminhao.pop();
            while (v >= b)
            {
                c += 1;
                v -= b;
            }
        }
    }
cout << v + (c * b) << endl;
return 0;
}