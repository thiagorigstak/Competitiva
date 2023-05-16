#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define pii pair<int,int>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    desync;
    int n, m, x, at;
    int tempo = 0,temp;
    vector<int> caixa;
    queue<int> cliente;
    priority_queue<pii,vector<pii>, greater<pii>> atendimento; // tempo/index 
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> x;
        caixa.push_back(x);
        }
    for(int i = 0; i < m; i++){
        cin >> x;
        cliente.push(x);
    }
    while(!cliente.empty()){
        for(int i = 0; i < caixa.size(); i++){
            x = caixa[i]; // bota cliente no caixa
            if(!cliente.empty()){
                temp = x * cliente.front();
                atendimento.push(make_pair(temp,i));
                cliente.pop();
            }
            else{
                break;
            }
        }
        temp = 0;
        while(!atendimento.empty()){
            at = atendimento.top().first - temp;
            temp += at;
            atendimento.pop();
        }
        tempo += temp;
    }
    cout << tempo << endl;
    return 0;
}