#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


int** Tab(int n, int m)
{
    int** tab = new int* [n];
    for (int i = 0; i < n; ++i)
    {
        tab[i] = new int[m];
    }
    return tab;
}

void Tab(int n, int m, int** tab)
{
    for (int i(0); i < n; i++)
        delete[] tab[i];
    delete[] tab;
    tab = NULL;
}
void Tab_R(int n, int m, int** tab)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            tab[i][j] = (rand() % 200);
}

int Tab_S(int n, int m, int** tab)
{
    int suma = 0, suma_p = 0, index=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            suma_p = suma_p + tab[i][j];
        suma_p = suma_p / m;
        if (suma_p > suma)
        {
            suma = suma_p;
            index = i;
        }
        suma_p = 0;
    }
    return index;
}

int main()
{
    srand(time(NULL));
    int n, m, index;
    int** tab;
    cout << "podaj wymiary tablicy dwuwymiarowej ";
    cin >> n >> m;
    tab = Tab(n, m);
    Tab_R(n, m, tab);
    index = Tab_S(n, m, tab);
    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < m; j++)
            cout << tab[i][j] << " | ";
    index = Tab_S(n, m, tab);
    cout << endl << index;
    Tab(n, m, tab);

    return 0;
}
