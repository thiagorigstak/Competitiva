#include <iostream>

using namespace std;

int main(){
    string teste = "01-02-12";
    string convert;
    convert.append(teste,6,2);
    cout << convert << endl;
    int day;
    day = stoi(convert);
    cout << day << endl;
    return 0;
}
