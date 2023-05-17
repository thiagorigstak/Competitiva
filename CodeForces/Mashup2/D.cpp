#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    //desync;
    int n,k,x;
    vector<int> cr;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cr.push_back(i + 1);
    }
    int aux = 0;
    for(int i = 0; i < k; i++){
        cin >> x;
        x = x % cr.size();
        //cout << "x = " << x << endl;
        if(x == 0){
                cout << cr[aux] << ' ';
                cr.erase(cr.begin()+aux);
                if(aux >= cr.size()){
                    aux = 0;
                    //cout << "saiu ,novo lider: " << cr[aux] << endl;
                }else{
                    //cout << "saiu ,novo lider: " << cr[aux] << endl;
                }
                continue;
        }
        while(x){
            if(aux == cr.size() - 1){
                aux = 0;
            }else{
                aux++;
            }
            x--;
            if(x == 0){
                cout << cr[aux] << ' ';
                cr.erase(cr.begin()+aux);
                if(aux >= cr.size()){
                    aux = 0;
                    //cout << "saiu ,novo lider: " << cr[aux] << endl;
                }else{
                    //cout << "saiu ,novo lider: " << cr[aux] << endl;
                }
            }
        }
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