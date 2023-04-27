#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    int n; // atletas
    vector<int> arr,v;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    v = arr;
    sort(arr.begin(),arr.end());
    for(int i = 0; i < n; i++){
        auto bin = lower_bound(arr.begin(),arr.end(),v[i]);
        cout << distance(arr.begin(), bin) + 1 << " ";
    }
    cout << endl;
    // 1LL auto cast de int diretamente para long long
    //code goes here
    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente