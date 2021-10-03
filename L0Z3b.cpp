#include <iostream>
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
            tab[i][j] = 1;
}

int Tab_S(int n, int** tab)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 100; j++)
            suma = suma + tab[i][j];
    return suma;
}

int main()
{
    int n, m = 100, suma;
    int** tab;
    cout << "podaj wymiar tablicy dwuwymiarowej ";
    cin >> n;
    tab = Tab(n, m);
    Tab_R(n, m, tab);
    suma = Tab_S(n, tab);
    cout << endl << suma;
    
    Tab(n, m, tab);

    return 0;
}
