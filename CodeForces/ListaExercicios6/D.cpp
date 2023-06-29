#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define ull unsigned long long
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    int m,n,k;
    cin >> n >> m >> k;
    vector<vector<char>> visit(n+1,vector<char>(m+1,'#'));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> visit[i][j];
        }
    }

    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente
// min element vetor ou max element vetor ==> auto min = min_element(temp.begin(),temp.end()); cout << *min << endl; min é um ponteiro pro menor elemento do vetor
// sort(me.begin(),me.end(),greater<int>()); // macete de ordenar inverso