#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int perm;
    cin >> perm;
    if (perm == 1) cout << perm;
    else if(perm < 4 ) cout << "NO SOLUTION";
    else if(perm == 4) cout << "2 4 1 3";
    else{
        for(int i = 1; i <= perm; i+=2) cout << i << " ";
        for(int i = 2; i <= perm; i+=2) cout << i << " ";
    }
    cout << endl;
    return 0;
}