#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define pii pair<int, int>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    desync;
    int n;
    stack<pii> pilha;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        char c;
        (cin>>c)>>x;
        if(c == 'A'){
            if(pilha.empty()){
                pilha.push(make_pair(x,x));
            }else{
                if(pilha.top().second > x){
                        pilha.push(make_pair(x,pilha.top().second));
                }
                else{
                    pilha.push(make_pair(x,x));
                }
            }
        }
        else
        {
            if(c == 'V'){
                if(pilha.empty()){
                    cout << 0 << endl;
                }else{
                    cout << pilha.top().second << endl;
                }
            }
            else{
                pilha.pop();
            }
        }
    }
    return 0;
}