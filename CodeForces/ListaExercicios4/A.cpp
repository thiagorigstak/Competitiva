#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    ll q,n,x,sum = 0;
    vector<ll> arr;
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> x;
        sum += x;
        arr.push_back(sum);
    }
    for(int i = 0; i < q; i++){
        cin >> x >> n;
        if(x == 1){
            cout << arr[n-1] << endl;
        }
        else{
            cout << arr[n - 1] - arr[x - 2] << endl;
        }
    }
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente
// min element vetor ou max element vetor ==> auto min = min_element(temp.begin(),temp.end()); cout << *min << endl; min é um ponteiro pro menor elemento do vetor
// sort(me.begin(),me.end(),greater<int>()); // macete de ordenar inverso