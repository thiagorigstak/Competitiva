#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define ull unsigned long long
#define pii pair<int,int>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"

int main(){
    desync;
    int n,m, count = 0;
    cin >> n >> m;
    queue<pii> q;
    vector<bool> visited(10e4+1,false);
    q.push(make_pair(n,count));
    while(q.size()){
        auto aux = q.front();
        q.pop();
        int u = aux.first;
        count = aux.second;
        if(u == m){
            break;
        }
        if(visited[u]){
            continue;
        }
        visited[u] = true;
        if( u < m and !visited[u*2]){
            q.push({u * 2, count + 1});
        }
        if( u > 0 and !visited[u-1]){
            q.push({u-1, count + 1});
        }
    }
    cout << count << endl;
    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente
// min element vetor ou max element vetor ==> auto min = min_element(temp.begin(),temp.end()); cout << *min << endl; min é um ponteiro pro menor elemento do vetor
// sort(me.begin(),me.end(),greater<int>()); // macete de ordenar inverso