#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"

int LSB(int num){
    return num & -num;
}

int getBit(int num, int pos){
    bool ret = ((num & (1<<pos)));
    return ret;
}
int setBit(int num, int bitPos)
{
    return (num | (1 << bitPos));
}

int main(){
    desync;
    int t,x,y,n;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> x;
        y = 0; // 0000
        n = log2(LSB(x)); // bit menos significante => y^x == no bit menos significante
        y = setBit(y,n);
        if(ceil(log2(x) == floor(log2(x)))){
            y = setBit(y,0);
        }
        if(x == 1){
            y = setBit(y,n+1);
        }
        //cout << (x^y) << ' ' << (x&y) << ' ';
        cout << y << endl;
    }
    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente
// min element vetor ou max element vetor ==> auto min = min_element(temp.begin(),temp.end()); cout << *min << endl; min é um ponteiro pro menor elemento do vetor
// sort(me.begin(),me.end(),greater<int>()); // macete de ordenar inverso