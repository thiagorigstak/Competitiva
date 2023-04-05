#include <iostream>

using namespace std;

typedef struct
{
    int Entrada, Saida;
} Tempo;

int main()
{
    ios::sync_with_stdio(false);
    int N;
    int aulas = 1;
    Tempo K[100000];
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> K[i].Entrada >> K[i].Saida;
        K[i].Saida = K[i].Entrada + K[i].Saida;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            if (K[i].Entrada >= K[j].Entrada)
            {
                if (K[i].Entrada == K[j].Entrada)
                {
                    if (K[i].Saida > K[j].Saida)
                    {
                        int x, y;
                        x = K[i].Entrada;
                        y = K[i].Saida;
                        K[i].Entrada = K[j].Entrada;
                        K[j].Entrada = x;
                        K[i].Saida = K[j].Saida;
                        K[j].Saida = y;
                    }
                }
                else
                {
                    int x, y;
                    x = K[i].Entrada;
                    y = K[i].Saida;
                    K[i].Entrada = K[j].Entrada;
                    K[j].Entrada = x;
                    K[i].Saida = K[j].Saida;
                    K[j].Saida = y;
                }
            }
        }
    }

    int i = 0;
    while (N--)
    {
        if (K[i].Saida <= K[i + 1].Entrada)
        {
            int x = 1;
            while (K[i].Entrada == K[i + x].Entrada)
            {
                x++;
            }
            i = x;
            x = 1;
            aulas++;
        }
        i++;
    }
    cout << aulas << endl;
    /*for (int i = 0; i < N; i++)
    {
        cout << K[i].Entrada << "||" << K[i].Saida << endl;
    }*/
    return 0;
}