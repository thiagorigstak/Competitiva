#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    int n, reorder = 0, ordem = 0;
    stack<int> s;
    cin >> n;
    for(int i = 0; i < 2*n; i++){
        cin.clear();
        string sx;
        int x;
        (cin >> sx);
        if(sx[0] == 'a'){
            cin >> x;
            s.push(x); // empilha caixa n_o X
        }
        else{ // desempilha caixa n_o X
            ordem++; // se a caixa > doq a ordem tem que reordenar
            if(!s.empty()){
                if(s.top() != ordem){
                    //cout << ordem << " Diferente " << s.top() << endl;
                    reorder++;
                    while(!s.empty()){
                        s.pop();
                    }
                }
                else{
                        //cout << ordem << ' ' << s.top() << " igual" << endl;
                        s.pop();
                    }
            }
        }
    }
    cout << reorder << endl;
    return 0;
}