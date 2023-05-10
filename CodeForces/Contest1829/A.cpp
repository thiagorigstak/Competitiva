#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    int t;
    string s = "codeforces";
    cin >> t;
    for(int i=0; i<t; i++){
        string x;
        int count = 0;
        cin >> x;
        for(int j =0; j<x.size(); j++){
            if(s[j] != x[j]){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente