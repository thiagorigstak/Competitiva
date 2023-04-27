#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    ll n,s;
    int answ = 0;
    cin >> n >> s;
    int i = n;
    int x  = s;
    if(n >= s){
        cout << 1 << endl;
        return 0;
    }
    while(1){
        if(s >= i){
            s -= i;
            answ++;
            if(s == 0){
                cout << answ << endl;
                break;
            }
        }
        else{
            if(s < i){
                i--;
            }
        }
    }
    // 1LL auto cast de int diretamente para long long
    //code goes here
    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente