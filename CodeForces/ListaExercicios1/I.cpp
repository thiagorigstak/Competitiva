#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main(){
    desync;
    int n, m, min = 10, max = 0;
    char c[10][10];
    bool bt[10] = {0}, at[10]={0};
    cin >> n >> m;
    int a = 0, b = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char x;
            cin >> x;
            c[i][j] = x;
            if(x == '1'){
                if(!bt[i]){
                    b = i+1;
                    bt[i] = true;
                }
                if(!at[j]){
                    at[j] = true;
                    if(j < min){
                        min = j + 1;
                    }
                    if(j >= max){
                        max = j + 1;
                    }
                }
            }
        }
    }
    if(max == min and max!=0){
        a = 1;
    }else if( min > max){
        a = 0;
    }
    else{
        a = (max - min) +1;
    }
    cout << a << 'x' << b << endl;
    return 0;
}
