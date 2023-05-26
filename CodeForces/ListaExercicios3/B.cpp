#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    desync;
    int q,t,m;//prisioneiros, gravidade, qtd pris transferir
    set<int> estoque;
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> t >> m;
        if(t == 1){
            estoque.insert(m);
        }else{
            if(estoque.count(m)){
                cout << "Sim" << endl;
            }else{
                cout << "Nao" << endl;
            }
        }
    }
    return 0;
}