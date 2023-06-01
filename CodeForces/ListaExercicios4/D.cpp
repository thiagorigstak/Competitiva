#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    ll n,m,l,r,x,s = 0, ss = 0, answ = 0;
    cin >> n >> m;
    vector<ll> arr, delta(n+2,0), psum(n+1,0), op(n+2,0), psop(n+1,0);
    arr.push_back(0);
    for(int i = 0; i < n; i++){
        cin >> x;
        arr.push_back(x);
    }
    for(int i = 0; i < m; i++){
        cin >> l >> r >> x;
        delta[l] += x;
        delta[r+1] -= x;
        op[l] += 1;
        op[r+1] -=1;
    }
    for(int i = 1; i <= n; i++){
        ss += op[i];
        psop[i] = ss;
        s -= delta[i];
        psum[i] = arr[i] + s;
        if(psum[i] > 0 and psop[i] > 0){
            answ += psop[i];
        }
    }
    cout << answ << endl;
    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente
// min element vetor ou max element vetor ==> auto min = min_element(temp.begin(),temp.end()); cout << *min << endl; min é um ponteiro pro menor elemento do vetor
// sort(me.begin(),me.end(),greater<int>()); // macete de ordenar inverso