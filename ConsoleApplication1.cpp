// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

void Tab_R(int* t, int n)
{
    t[0] = n;
    for (int i = 1; i < n; i++)
    {
        t[i] = 10 % i;
    }
}

void Tab(int t[], int n)
{
    float j = 0;
    for (int i = 0; i < n; i++)
        j = j + t[i];
    cout << "suma elementow tablicy wynosi : " << j << endl;
    j = 0;
        for (int i = 0; i < n; i++)
            j = j + t[i];
        j = j / n;
    cout << "srednia arytmetyczna elementow tablicy wynosi : " << j << endl;
    j = 0;
        for (int i = 0; i < n; i++)
            j = j + (t[i] * t[i]);
    cout << "suma kwadratow elementow tablicy wynosi : " << j << endl;
    j = 0;
}

int main()
{
    int n;
    cout << "Podaj rozmiar tablicy: ";
    cin >> n;
    cout << endl;
    int * t = new int[n];
    Tab_R(t, n);
    for (int i = 0; i < n; i++)
        cout << t[i] << " | ";
    cout << endl;
    Tab(t, n);
    delete[] t;
    return 0;
}


