#include <bits/stdc++.h>

using namespace std;

int main(){
 ios::sync_with_stdio(false);
 long int x;
 cin >> x;
 cout << x << endl;
 while (x > 1) {
    switch (x%2)
    {
    case 0:
        x /= 2;
        cout << x << endl;
        break;
 
    default:
        x = (x * 3) + 1;
        cout << x << endl;
    break;
    }
 }
 return 0;
}
