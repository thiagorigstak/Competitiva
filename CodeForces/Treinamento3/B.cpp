#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<int> arr;
        set<int> s;
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            arr.push_back(x);
        }
        for(int j = 0; j < n; j++){
            for(int k = j + 1; k < n; k++){
                int areat;
                areat = arr[k] - arr[j]; // base * altura
                s.insert(areat);
            }
        }
        cout << s.size() << endl;
    }
    return 0;
}
// notes : endl mais devagar que \n
// cin string com espaço --> getline(cin,string var)
// continue; - pula o bloco de comando atual e vai pro prox
// break; - sai do laço definitivamente