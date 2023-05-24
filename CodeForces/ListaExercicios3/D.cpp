#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    int sum = 0, oldsum = 0;
    int x = 3, k,j;
    cin >> k;
    while(x){
        if(x < 3){
            oldsum = sum;
            sum = 0;
        }
        for(int i = 0; i < k; i++){
            cin >> j;
            sum += j;
        }
        if(x < 3){
            cout << abs(sum - oldsum) << endl;
        }
        k--;
        x--;
    }
    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente
// min element vetor ou max element vetor ==> auto min = min_element(temp.begin(),temp.end()); cout << *min << endl; min é um ponteiro pro menor elemento do vetor