#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
using namespace std;

int findmin(int n,int x,int y);

int main(){
    ios::sync_with_stdio(false); // desativa sincronizaçao
    cin.tie(NULL); //desativa sinc
    cout.tie(NULL); //desativa sinc
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n, x1, y1, x2, y2, resp,resp2;
        cin >> n >> x1 >> y1 >> x2 >> y2;
        resp = findmin(n, x1, y1);
        resp2 = findmin(n, x2, y2);
        cout << abs(resp - resp2) << endl;
    }
    return 0;
}

int findmin(int n, int x, int y){
    if(x < n && x < y && x < n+1-x && x < n+1-y){
        return x;
    }else if(y < n && y < n+1-x && y < n+1-y){
        return y;
    }
    else if(n+1-x < n+1-y){
        return n+1-x;
    }
    else{
        return n+1-y;
    }
}