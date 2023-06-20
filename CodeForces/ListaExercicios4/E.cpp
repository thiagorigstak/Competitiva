#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    ll n,q,l,r,x, aux = 0,store = 0;
    cin >> n >> q;
    vector<ll> arr,delta(n+2,0),psum(n+1,0), arrsol(n,0);
    for(int i = 0; i < n; i++){
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    for(int i = 0; i < q; i++){
        cin >> l >> r;
        delta[l] += 1;
        delta[r + 1] -= 1;
    }
    for(int i = 1; i <= n; i++){
        store += delta[i];
        psum[i] = store;
    }
    cout << endl;
    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente
// min element vetor ou max element vetor ==> auto min = min_element(temp.begin(),temp.end()); cout << *min << endl; min é um ponteiro pro menor elemento do vetor
// sort(me.begin(),me.end(),greater<int>()); // macete de ordenar inverso