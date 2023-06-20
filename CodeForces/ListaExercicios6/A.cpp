#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define ull unsigned long long
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    desync;
    ull n,a,t;
    vector<ull> arr;
    cin >> n >> t;
    for(int i = 0; i < n - 1; i++){
        cin >> a;
        arr.push_back(a);
    }
    for(int i = 0; i < n - 1;){
        i += arr[i];
        if(t == i + 1){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}