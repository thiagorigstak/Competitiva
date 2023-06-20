#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"

int main(){
    desync;
    string str;
    bool change = false;
    int k = 0;
    cin >> str;
    vector<bool> visitados(str.size(),false);

    for(int i = 0; i < str.size() - 1; i++){
        if(str[i] == 'V' and str[i+1] == 'K'){
            visitados[i] = true;
            visitados[i+1] = true;
            str[i] = 'X';
            str[i+1] = 'X';
            k++;
            i++;
        }
    }
    for(int i = 0; i < str.size() - 1; i++){
        if(!visitados[i] and !visitados[i+1] and !change){
            if(str[i] == 'K' and str[i+1] =='V'){
                visitados[i] = true;
                continue;
            }else{// KK ou VV
                change = true;
                visitados[i] = true;
                visitados[i+1] = true;
                k++;
            }
        }
    }
    cout << k << endl;
    return 0;    
}