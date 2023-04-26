#include <bits/stdc++.h>


using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string c;
        cin >> c;
        int a = int(c[0] - '0') + int(c[1] - '0') + int(c[2] - '0');
        int b = int(c[3] - '0') + int(c[4] - '0') + int(c[5] - '0');
        if(a == b){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}