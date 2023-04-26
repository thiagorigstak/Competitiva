#include <bits/stdc++.h>


using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        long t,a,b,c;
        long res = 0;
        cin >> t >> a >> b >> c;
        if(t < a){
            res+=1;
        }
        if(t < b){
            res+=1;
        }
        if(t < c){
            res+=1;
        }
        cout << res << endl;
    }
    return 0;
}