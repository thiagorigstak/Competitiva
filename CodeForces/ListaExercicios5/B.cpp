#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define ull unsigned long long
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

ull invert(ull n){
    ull x = 1;
    while(x<=n){
        x <<= 1;
    }
    x--;
    return x^n;
}

int main(){
    desync;
    ull n,a;
    cin >> n;
    a = invert(n);
    cout << n << ' ' << a << endl;
    return 0;
}