#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        unsigned ll x,y;
        cin >> y >> x;
        if(x >= y)cout << x*x - (y-1) << endl;
        if(y > x)cout << y*y - (x-1) << endl;
    }
    cout << endl;
    return 0;
}