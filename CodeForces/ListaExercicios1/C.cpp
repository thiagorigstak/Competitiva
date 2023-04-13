#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main(){
    desync;
    int val, m;
    bool res = false;
    cin >> val >> m;
    if(val%500 == 0){
        int temp;
        temp = val/500;
        temp -= m;
        if(temp <= 0){
            res = true;
        }
    }
    else if(m>val){
        res = true;
    }
    while(m--){
        val -= 1;
        if(val%500 == 0){
            if(val/500 - m <= 0){
                res = true;
                break;
            }
        }
    }
    if(res){
        cout << "Sim" << endl;
    }else{
        cout << "Nao" << endl;
    }
    return 0;
}

