#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    ll n,q,l,r,x, aux = 0, maior = -1,sol = 0;
    cin >> n >> q;
    priority_queue<ll> arr;
    vector<ll> delta(n+2,0),psum(n+1,0);
    for(int i = 0; i < n; i++){
        cin >> x;
        arr.push(x);
    }
    for(int i = 0; i < q; i++){
        cin >> l >> r;
        delta[l] += 1;
        delta[r + 1] -= 1;
    }
    for(int i = 1; i <= n; i++){
        aux += delta[i];
        if(aux > maior){
            maior = aux;
        }
        psum[i] = aux;
        //cout << psum[i] << ' ';
    }
    while(!arr.empty()){
        for(int j = 1; j <= n ; j++){
            if(psum[j] == maior){
                sol += psum[j] * arr.top();
                arr.pop();
            }
        }
        maior--;
    }
    cout << sol << endl;
    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente
// min element vetor ou max element vetor ==> auto min = min_element(temp.begin(),temp.end()); cout << *min << endl; min é um ponteiro pro menor elemento do vetor
// sort(me.begin(),me.end(),greater<int>()); // macete de ordenar inverso