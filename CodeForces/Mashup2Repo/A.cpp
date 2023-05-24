#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    int n,k,x,res=0; //arvores plantadas, tamanho ciclovia
    cin >> n >> k;
    int arr[k] = {0};
    for(int i = 0; i< n; i++){
        cin >> x;
        arr[x - 1] = 1;
    }
    for(int i = 0; i < k; i++){
        //cout << arr[i] << ' ';
        if(arr[i] == 0){
            if(i == 0){
                res+= 1;
                continue;
            }
            else if(arr[i - 1] == 1){
                res += 1;
            }
        }
    }
    //cout << endl;
    cout << res << endl;
    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente
// min element vetor ou max element vetor ==> auto min = min_element(temp.begin(),temp.end()); cout << *min << endl; min é um ponteiro pro menor elemento do vetor
// sort(me.begin(),me.end(),greater<int>()); // macete de ordenar inverso