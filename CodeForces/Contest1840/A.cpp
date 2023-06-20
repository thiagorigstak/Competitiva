#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define ull unsigned long long
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    int t,n;
    string s, sol, debug;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        cin >> s;
        sol = "";
        for(int j = 0; j < n; j++){
            debug  = s[j];
            for(int k = j+1; k < n ; k++){
                if(s[j] == s[k]){
                    sol += debug;
                    j = k;
                    break;
                }
            }
        }
        cout << sol << endl;
    }
    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente
// min element vetor ou max element vetor ==> auto min = min_element(temp.begin(),temp.end()); cout << *min << endl; min é um ponteiro pro menor elemento do vetor
// sort(me.begin(),me.end(),greater<int>()); // macete de ordenar inverso