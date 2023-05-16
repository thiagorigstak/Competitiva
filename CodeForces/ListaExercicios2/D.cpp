#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define pii pair<int,int>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    desync;
    int n, m, x;
    pii at;
    int tempo = 0,temp;
    vector<int> caixa;
    queue<int> cliente;
    priority_queue<pii,vector<pii>, greater<pii>> atendimento; // tempo/index 
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> x;
        caixa.push_back(x);
        atendimento.push(make_pair(0,i));
    }
    for(int i = 0; i < m; i++){
        cin >> x;
        cliente.push(x);
    }
    while(!cliente.empty()){
        x = cliente.front();
        at = atendimento.top();
        temp = x * caixa[at.second] + at.first;
        atendimento.pop();
        cliente.pop();
        atendimento.push(make_pair(temp,at.second));
    }
    int resp = 0;
    while(!atendimento.empty()){
        resp = atendimento.top().first;
        //cout << atendimento.top().first << ' ' << atendimento.top().second << endl;
        atendimento.pop();
    }
    cout << resp << endl;
    return 0;
}