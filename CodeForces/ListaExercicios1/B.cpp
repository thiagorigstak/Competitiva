#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main(){
    desync;
    int n;
    ll maior = 0, res = 0;
    array<int,100> arr;
    cin >> n;

    for(int i = 0; i<n;i++){
        int x;
        cin >> x;
        if(x > maior){
            maior = x;
        }
        arr[i] = x;
    }
    for(int i=0;i<n;i++){
        if(arr[i] < maior){
            res += maior-arr[i];
        }
    }
    cout << res << endl;

    return 0;
}
