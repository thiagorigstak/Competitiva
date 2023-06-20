#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define ull unsigned long long
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
void merge(vector<int> &v, vector<int> &temp, int ini, int meio,int fim){
    int i,k,j;
    i = ini;
    j = meio+1;
    k = ini;
    // todos elementos
    while(i <= meio and j <= fim){
        if(v[i] < v[j]){
            temp[k] = v[i++];
        }
        else{
            temp[k] = v[j++];
        }
        k++;
    }
    // sobra elementos a direita
    while(i <= meio){
        temp[k] = v[i++];
        k++;
    }
    // sobra elementos a esquerda
    while(j <= fim){
        temp[k] = v[j++];
        k++;
    }
    // bota tudo no vetor principal
    for(k = ini; k <= fim; k++){
        v[k] = temp[k];
    }
}


void mergesort(vector<int> &v, vector<int> &temp, int ini, int fim){
        int meio;// divide
        if(ini < fim){
            meio = (ini + fim)/2;
            mergesort(v,temp,ini,meio);
            mergesort(v,temp,meio+1,fim);
            merge(v,temp,ini,meio,fim);//junta
        }
}

int main(){
    desync;
    int n;
    vector<int> v={7,-4,3,9,12,0,3,8}, temp(8,0); // temp(tamanho,0)
    mergesort(v,temp,0,7); // &vetor, &temporario; inicio e fim
    for(int i = 0; i < 8; i++){
        cout << v[i] << ' ';
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