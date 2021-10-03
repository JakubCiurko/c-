#include <iostream>
using namespace std;


int** Tab(int n)
{
    int** tab = new int* [n];
    for (int i = 0; i < n; ++i)
    {
        tab[i] = new int[i+1];
    }
    return tab;
}

void Tab(int n, int** tab)
{
    for (int i(0); i < n; i++)
        delete[] tab[i];
    delete[] tab;
    tab = NULL;
}
void Tab_R(int n, int** tab)
{
    int m = 1;
    for (int i = 0; i < n; i++, m++)
        for (int j = 0; j < m; j++)
            tab[i][j] = 1;
}


int main()
{
    int n, m = 1;
    int** tab;
    cout << "podaj wymiary tablicy dwuwymiarowej ";
    cin >> n;
    tab = Tab(n);
    Tab_R(n, tab);
        for (int i = 0; i < n; i++, m++, cout << endl)
            for (int j = 0; j < m; j++)
                cout << tab[i][j];

    Tab(n, tab);

    return 0;
}
