#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    ll n,q,l,r,x, aux = 0,psum, msum;
    vector<ll> arr;
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> x;
        aux += x;
        arr.push_back(aux);
    }
    for(int i = 0; i < q; i++){
        cin >> l >> r;
    }
    cout << msum << endl;
    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente
// min element vetor ou max element vetor ==> auto min = min_element(temp.begin(),temp.end()); cout << *min << endl; min é um ponteiro pro menor elemento do vetor
// sort(me.begin(),me.end(),greater<int>()); // macete de ordenar inverso