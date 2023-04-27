#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);//cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    int t,n,m;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n >> m;
        string s[n];
        for(int j = 0; j < n;j++){
            string s2;
            cin >> s2;
            s[j] = s2;
        }
        for(int x = 0; x < n; x++){
            for(int j = n - 2; j >= 0; j--){
                for(int k = 0; k < m; k++){
                    if(s[j][k] == '*' and s[j+1][k] == '.'){
                        s[j+1][k] = '*';
                        s[j][k] = '.';
                }
            }        
        }
    }
        for(int j = 0; j < n; j++){
                cout << s[j] << endl;
            }
     cout << endl;
    }
    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente