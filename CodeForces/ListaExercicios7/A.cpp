#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define ull unsigned long long
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int lb(int begin, int end, int key, vector<int> &v);
int main(){
    desync;
    vector<int> cubos;
    int n,q, aux;
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> aux;
        cubos.push_back(aux);
    }
    sort(cubos.begin(),cubos.end());
    for(int i = 0; i < q; i++){
        int x;
        cin >> x;
        cout << lb(0,n,x,cubos) << ' ';
    }
    cout << endl;
    return 0;
}

int lb(int begin, int end, int key, vector<int> &v){
    int mid;
    if(begin < end){
        mid = (end+begin)/2;
        if(key == v[mid]){
            while(1){
                if(v[mid-1] == key){
                    mid -= 1;
                }else{
                    return mid + 1;
                }
            }
        }else{
            if(key > v[mid]){
                return lb(mid+1,end,key,v);
            }
            else{
                return lb(begin, mid-1,key,v);
            }
        }
    }
    return -1;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente
// min element vetor ou max element vetor ==> auto min = min_element(temp.begin(),temp.end()); cout << *min << endl; min é um ponteiro pro menor elemento do vetor
// sort(me.begin(),me.end(),greater<int>()); // macete de ordenar inverso