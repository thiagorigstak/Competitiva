#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    desync;
    ll n,f,p, resp = 0, temp;
    queue<ll> fila;
    cin >> n >> f >> p;
    for(int i = 0; i < n;i++){
        ll x;
        cin >> x;
        fila.push(x);
    }
    ll i = f;
    while(!fila.empty()){
        if(i == f){
            if(fila.front() <= p){
                resp += 5;
                fila.pop();
            }
            else{
                resp += 10;
                temp = fila.front() - 2;
                fila.pop();
                fila.push(temp);
            }
            i = 1;
        }
        else{
            resp += 1;
            fila.pop();
            i++;
        }
    }
    cout << resp << endl;
    return 0;
}