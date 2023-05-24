#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    int n, k1,k2,x, res = 0, k;
    vector<int> dist;
    priority_queue<int> pq;
    cin >> n >> k1 >> k2;
    k = k1+k2;
    for(int i = 0;i < n; i++){
        cin >> x;
        dist.push_back(x);
    }
    for(int i = 0;i < n; i++){
        cin >> x;
        x = abs(x);
        pq.push(abs(dist[i] - x));
    }
    while(k--){
        x = pq.top();
        if(x == 0){
            x++;
            pq.pop();
            pq.push(x);
        }else{
            x--;
            pq.pop();
            pq.push(x);
        }
    }
    while(!pq.empty()){
        res += pq.top() * pq.top();
        pq.pop();
    }
    cout << res << endl;
    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente
// min element vetor ou max element vetor ==> auto min = min_element(temp.begin(),temp.end()); cout << *min << endl; min é um ponteiro pro menor elemento do vetor
// sort(me.begin(),me.end(),greater<int>()); // macete de ordenar inverso