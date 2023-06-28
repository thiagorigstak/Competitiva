#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define ull unsigned long long
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    int n, aux = 0, i = 0, contador;
    vector<int> digits, answ;
    cin >> n;
    aux = n;
    while(aux > 0){
        digits.push_back(aux%10);
        aux /= 10;
    }
    aux = 0;
    contador = digits.size();
    while(contador > 0){
        if(i >= digits.size()){
            i = 0;
            answ.push_back(aux);
            aux = 0;
        }
        if(digits[i] > 0){
            digits[i] -= 1;
            aux += pow(10,i);
        }else{
            if(digits[i] == 0){
                contador--;
                digits[i]--;
            }
        }
        i++;
    }
    cout << answ.size() << endl;
    for(int i = 0; i < answ.size(); i++){
        cout << answ[i] << ' ';
    }
    cout << endl;
    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente
// min element vetor ou max element vetor ==> auto min = min_element(temp.begin(),temp.end()); cout << *min << endl; min é um ponteiro pro menor elemento do vetor
// sort(me.begin(),me.end(),greater<int>()); // macete de ordenar inverso