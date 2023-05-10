#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    int t;
    cin >> t;
    for(int i=0; i < t; i++){
        int n, counta = 0, countmax = 0;
        cin >> n;
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            if(x == 0){
                counta++;
            }
            else{
                if(countmax < counta){
                    countmax = counta;
                }
                counta = 0;
            }
        }
        if(countmax == 0 or countmax < counta){
            countmax = counta;
        }
        cout << countmax << endl;
    }
    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente