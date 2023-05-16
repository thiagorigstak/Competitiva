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
    string buff;
    cin >> n;
    getline(cin, buff);
    for(int i = 0; i < 2*n; i++){
        string sx;
        getline(cin, sx);
        if(sx[0] == 'a'){
            s.push((int) (sx[4] - '0')); // empilha caixa n_o X
        }
        else{ // desempilha caixa n_o X
            ordem++; // se a caixa > doq a ordem tem que reordenar
            if(!s.empty()){
                if(s.top() == ordem){
                    s.pop();
                }
                else{
                    reorder++;
                    while(!s.empty()){
                        s.pop();
                    }
                }
            }
        }
    }
    cout << reorder << endl;
    return 0;
}