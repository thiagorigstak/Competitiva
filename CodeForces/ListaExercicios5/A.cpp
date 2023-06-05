#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main(){
    desync;
    int a,b,x;
    cin >> a >> b;
    x = a^b;
    cout << x << endl;
    return 0;
}