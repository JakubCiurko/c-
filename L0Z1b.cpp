
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


int main()
{
    int n, m;
    int** tab;
    cout << "podaj wymiary tablicy dwuwymiarowej";
    cin >> n >> m;
    tab = Tab(n, m);

    for (int i(0); i < n; ++i)
        delete[] tab[i]; 
    delete[] tab; 
    tab = NULL;
    
}
