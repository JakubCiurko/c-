
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
    for (int i(0); i < n; ++i)
        delete[] tab[i];
    delete[] tab;
    tab = NULL;
}

int main()
{
    int n, m;
    int** tab;
    cout << "podaj wymiary tablicy dwuwymiarowej";
    cin >> n >> m;
    tab = Tab(n, m);
    Tab(n, m, tab);

    return 0;
}
