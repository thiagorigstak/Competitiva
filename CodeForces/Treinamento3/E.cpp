#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    int t,n,k,x;
    cin >> t;
    for(int i = 0; i < t; i++){
        priority_queue<int> ily,me;
        int sume = 0,sumily = 0, resp = 0;
        cin >> n;
        k = n - (n/4);
        for(int j = 0; j < n; j++){
            cin >> x;
            me.push(x);
        }
        for(int j = 0; j < n; j++){
            cin >> x;
            ily.push(x);
        }
        while(k > 0){
            sume += me.top();
            sumily += ily.top();
            ily.pop();
            me.pop();
            k--;
        }
        while(sumily > sume){
            resp++;
            me.push(100);
            ily.push(0);
            sume += me.top();
            sumily += ily.top();
            me.pop();
            ily.pop();
        }
        cout << resp << endl;
    }
    return 0;
}