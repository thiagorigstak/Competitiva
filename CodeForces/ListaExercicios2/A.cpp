#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define pii pair<int,int> 
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    string s;
    stack<char> st;
    int res = 0, comids = 0;
    bool ra = false;
    cin >> s;
    // . formiga, r rã, s serpente
    for(int i = 0; i < s.size(); i++){
        st.push(s[i]);
        if(s[i] == 'r' and !ra){
            ra = true;
            continue;
        }
        if(s[i] == '.' and ra){
            comids++;
            continue;
        }
        if(s[i] == 's' and ra){
            comids = 0;
            ra = false;
            continue;
        }
        if(s[i] == 'r' and ra){
            res += comids;
            comids = 0;
            continue;
        }
    }
    if(comids != 0){
        res += comids;
    }
    cout << res << endl;
    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente