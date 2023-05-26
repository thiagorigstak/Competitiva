#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    int x,p,t,n,resp = 0;
    stack<int> treno, aux;
    vector<int> cidades;
    cin >> p >> t >> n;
    for(int i = 0; i < p; i++){
        cin >> x;
        cidades.push_back(x);
    }
    for(int i = 0; i < t; i++){
        cin >> x;
        treno.push(x);
    }
    while(!treno.empty()){
        resp++;
        for(int i = 0; i < p; i++){
            while (aux.size() < n);
            {
                aux.push(treno.top());
                treno.pop();
            }
        }
    }
    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente
// min element vetor ou max element vetor ==> auto min = min_element(temp.begin(),temp.end()); cout << *min << endl; min é um ponteiro pro menor elemento do vetor
// sort(me.begin(),me.end(),greater<int>()); // macete de ordenar inverso