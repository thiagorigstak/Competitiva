#include <iostream>

using namespace std;

unsigned long long int inverter(unsigned long long int Num);

int main()
{
    ios::sync_with_stdio(false);
    int N;
    unsigned long long int icc[61];
    icc[0] = 0;
    icc[1] = 1;
    icc[2] = 2;
    for (int i = 3; i < 61; i++)
    {
        unsigned long long int A, B;
        A = inverter(icc[i - 1]);
        B = inverter(icc[i - 2]);
        icc[i] = A + B;
    }

    while (cin >> N)
    {
        cout << icc[N] << endl;
    }

    return 0;
}

unsigned long long int inverter(unsigned long long int Num)
{
    unsigned long long int inv = 0;
    while (Num > 0)
    {
        inv = 10 * inv + Num % 10;
        Num /= 10;
    }

    return inv;
}