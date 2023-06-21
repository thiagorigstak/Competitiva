#include <bits/stdc++.h>
#define endl "\n"    // macro
#define ll long long // macro
#define ull unsigned long long
#define desync                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;
// typedef long long int ll; define ll para long long int "macro"
vector<vector<bool>> visited(52, vector<bool>(52, false));
vector<vector<char>> graph(52, vector<char>(52));
bool answ = false;
void DFS(int i, int j, int x, int y, char c, int m, int n)
{
    if (i < 0 or j < 0 or i >= n or j >= m)
    {
        return;
    }
    if (graph[i][j] != c)
    {
        return;
    }
    if (visited[i][j])
    {
        answ = true;
        return;
    }

    visited[i][j] = true;

    if (i + 1 != x or j != y)
    {
        DFS(i + 1, j, i, j, c, m, n);
    }
    if (i != x or j + 1 != y)
    {
        DFS(i, j + 1, i, j, c, m, n);
    }
    if (i - 1 != x or j != y)
    {
        DFS(i - 1, j, i, j, c, m, n);
    }
    if (i != x or j - 1 != y)
    {
        DFS(i, j - 1, i, j, c, m, n);
    }
}

int main()
{
    desync;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j])
            {
                DFS(i, j, -1, -1, graph[i][j], m, n);
                if (answ)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente
// min element vetor ou max element vetor ==> auto min = min_element(temp.begin(),temp.end()); cout << *min << endl; min é um ponteiro pro menor elemento do vetor
// sort(me.begin(),me.end(),greater<int>()); // macete de ordenar inverso