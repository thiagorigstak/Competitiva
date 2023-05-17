#include <bits/stdc++.h>
#define endl "\n"// macro 
#define ll long long// macro
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
//typedef long long int ll; define ll para long long int "macro"
int main(){
    desync;
    int n, sk1=0, sk2=0,sk3=0; // skill 1 2 3 - prog - math - PE
    vector<pair<int,int>> arr,sol;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(make_pair(x,i+1));
        switch (x)
        {
        case 1:
            sk1++;
            break;
        case 2:
            sk2++;
            break;
        case 3:
            sk3++;
            break;
        default:
            break;
        }
    }
    vector<int> temp{sk1, sk2, sk3};
    auto times = min_element(temp.begin(),temp.end());
    if(*times == 0){
        cout << 0 << endl;
        return 0;
    }
    cout << *times << endl;
    for(int i = 0; i < *times; i++){
        for(int j = 0; j < n; j++){
            if(arr[j].first == 1){
                arr[j].first = 4;
                cout << arr[j].second << ' ';
                break;
            }
        }
        for(int j = 0; j < n; j++){
            if(arr[j].first == 2){
                arr[j].first = 4;
                cout << arr[j].second << ' ';
                break;
            }
        }
        for(int j = 0; j < n; j++){
            if(arr[j].first == 3){
                arr[j].first = 4;
                cout << arr[j].second << endl;
                break;
            }
        }
    }
    return 0;
}