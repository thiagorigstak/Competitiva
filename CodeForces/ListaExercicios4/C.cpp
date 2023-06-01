#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    int n,q,t, l, r, x,s = 0, answ = 0;
    cin >> n >> q >> t;
    vector<int> arr(n,0),delta(n+2,0);
    for(int  i = 0; i < q; i++){
        cin >> l >> r >> x;
        delta[l] += x;
        delta[r+1] -= x;
    }
    for(int i = 1; i <= n; i++){
        s += delta[i];
        if(s >= t){
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
// min element vetor ou max element vetor ==> auto min = min_element(temp.begin(),temp.end()); cout << *min << endl; min é um ponteiro pro menor elemento do vetor
// sort(me.begin(),me.end(),greater<int>()); // macete de ordenar inverso