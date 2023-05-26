#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    desync;
    int n,t,c,x,size = 0, res = 0;//prisioneiros, gravidade, qtd pris transferir
    vector<int> arr,aux, sizes;
    cin >> n >> t >> c;
    for(int i = 0; i < n ; i++){
        cin >> x;
        arr.push_back(x);
        if(x > t){
            aux.push_back(i); // pos onde havera quebra da linha de pessoas
            sizes.push_back(size);
            size = 0;
        }else{
            size++;
        }
        
    }
    sizes.push_back(size);
/*     for(int i = 0; i < aux.size();i++){
        cout << aux[i] << ' ';
    }
    cout << endl; */
    for(int i = 0; i < sizes.size();i++){
        //cout << sizes[i] << ' ';
        x = sizes[i] - c + 1;
        if(x>0){
            res += x;
        }
    }
    //cout << endl;
    cout << res << endl;
    return 0;
}