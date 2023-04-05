#include<iostream>
#include<time.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    clock_t start, end;
    int x, y, cond;
    cin >> x >> y;
    start = clock();
    cond = x > y ? x : y ;
    cout << cond << endl;
    end = clock();
    double timetk = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "time taken:" << timetk << "sec" << endl;
    start = clock();
    if(x > y){
        end = clock();
        timetk = double(end - start) / double(CLOCKS_PER_SEC);
        cout << "timetaken if:" << timetk << "sec" <<endl;
    }
    else{
        end = clock();
        timetk = double(end - start) / double(CLOCKS_PER_SEC);
        cout << "timetaken else:" << timetk << "sec" <<endl;
    }
    return 0;
}