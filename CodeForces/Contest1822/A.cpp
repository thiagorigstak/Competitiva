#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int n, t, answ = -1, maior = 0;// n = videos, t = tempo
        vector<int> v1, v2;// v1 tempo V2 entreterimento;
        cin >> n >> t;
        for(int j = 0; j<n; j++){
            int x;
            cin >> x;
            v1.push_back(x);
        }
        for(int j = 0; j<n; j++){
            int x;
            cin >> x;
            v2.push_back(x);
        }
        for(int j=0; j<n; j++){
            if(v1[j] <= t && v2[j] >= maior){
                answ = j +1;
                maior = v2[j];
            }
            t--;
        }
        cout << answ << endl;
    }
    // 1LL auto cast de int diretamente para long long
    //code goes here
    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente