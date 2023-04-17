#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
    unsigned long long int n = 10, rounds = 0;
    cin >> n;
 
    unsigned long long int m[n];
 
    for (int i = 0; i < n; i++){
        unsigned long long int x;
        cin >> x;
        m[i] = x;
        if( i!= 0 and m[i-1] > m[i]){
            rounds += m[i-1] - m[i];
            m[i] = m[i-1];
        }
    }
    cout << rounds << endl;
    return 0;
}