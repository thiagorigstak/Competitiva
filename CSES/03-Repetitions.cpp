#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    int maior = 0, contador = 1;
    string s;
    cin >> s;
    for(int i = 1; i <= s.size(); i++){
        if (s[i] == s[i-1]){
            contador++;
        }
        else if(contador > maior){
            maior  = contador;
            contador = 1;
        }
        else{
            contador = 1;
        }
    }
    cout << maior << endl;
    return 0;
}