#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pcc pair<char,char>
using namespace std;

int main(){
    desync;
    int q,x;
    char c;
    string t1, t2, y;
    cin >> t1;
    cin >> t2;
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> y;
        for(int i = 0; i < y.size(); i++){
            if(isalpha(y[i])){
                if(isupper(y[i])){// OK - num
                    c = (char)tolower(y[i]);
                    x = t1.find(c);
                    cout << (char)toupper(t2[x]);
                }else{ // Ok - num
                    x = t1.find(y[i]);
                    cout << t2[x];
                }
            }else{
                cout << y[i];
            }
        }
        cout << endl;
    }
    return 0;
}