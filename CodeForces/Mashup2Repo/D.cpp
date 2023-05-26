#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    int n,x,sanduva, res = 0;
    priority_queue<int> pq;
    cin >> n;
    cin >> sanduva;
    for(int i = 0; i < n - 1; i++){
        cin >> x;
        pq.push(x);
    }
    while(sanduva <= pq.top()){
        x = pq.top();
        sanduva += 1;
        x -= 1;
        pq.pop();
        pq.push(x);
        res++;
    }
    //cout << sanduva << ' ' << pq.top() << endl;
    cout << res << endl;
    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente
// min element vetor ou max element vetor ==> auto min = min_element(temp.begin(),temp.end()); cout << *min << endl; min é um ponteiro pro menor elemento do vetor
// sort(me.begin(),me.end(),greater<int>()); // macete de ordenar inverso