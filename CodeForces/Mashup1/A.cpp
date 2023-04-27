#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    int n;
    int answ = 0;
    cin >> n;
    string x;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        x.push_back(c);
    }
    if(n == 1){
        cout << 0 << endl;
        return 0;
    }
    for(int i = 0; i < n; i++){
        if(x[i] == x[i + 1]){
            answ++;
        }
    }
    cout << answ << endl;
    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente