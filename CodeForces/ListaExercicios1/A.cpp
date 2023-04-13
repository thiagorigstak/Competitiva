#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    desync;
    int n,g,f,c,res;
    cin >> n >> g >> f >> c;
    if(g >= f){
        res = c + f;
    }
    else{
        res = c + g;
    }
    if(n < res){
        res = n;
    }
    cout << res << endl;
    return 0;
}
