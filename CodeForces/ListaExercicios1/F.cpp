#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int getsum(int n){
    int sum = 0;
        while(n!= 0){
            sum += n%10;
            n /= 10;
        }
    return sum;
}

int main(){
    desync;
    int n,a ,b;
    int res = 0;
    cin >> n >> a >> b;
    for(int i = 1; i <= n; i++){
        int x;
        if(i < 10 and i >= a and i <= b){
            res += i;
        }else{
            x = getsum(i);
            if(x >= a and x<=b){
                res += i;
            }
        }
    }
    cout << res;
    return 0;
}