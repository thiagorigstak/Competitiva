#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    string c;
    stack<int> s;
    cin >> c;
    for(int i = 0; i < c.size(); i++){
        if(s.empty()){
            s.push(c[i]);
        }else{
            if(s.top() == c[i]){
                s.pop();
            }else{
                s.push(c[i]);
            }
        }
    }
    if(s.empty()){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}