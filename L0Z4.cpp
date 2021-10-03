#include <iostream>
using namespace std;

int* Tab(int n)
{
    int* t = new int[n];
    return t;
}

void Tab(int* tab, int n)
{
    tab[0] = n;
    for (int i = 1; i < n; i++)
        tab[i] = 127 % (i+18);
}

void Swap(int* tab, int n)
{
    int j, g;
    n = n - 1;
    g = n;
    for (int i = 0; i < (g / 2); i++)
    {
        j = tab[i];
        tab[i] = tab[n];
        tab[n] = j;
        n--;
    }
}
void Left(int* tab, int n)
{
    int j;
    n = n - 1;
    j = tab[0];
    for (int i = 0; i < n; i++)
        tab[i] = tab[i + 1];
    tab[n] = j;
}
void Right(int* tab, int n)
{
    int j;
    n = n - 1;
    j = tab[n];
    for (int i = n; i >= 0; i--)
        tab[i] = tab[i - 1];
    tab[0] = j;
}

void Sort_Up(int* tab, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j + 1];
                tab[j + 1] = tab[j];
                tab[j] = temp;
            }
        }
    }
}

void Sort_Down(int* tab, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j + 1];
                tab[j + 1] = tab[j];
                tab[j] = temp;
            }
        }
    }
    Swap(tab, n);
}

int main()
{
    int n;
    int* tab;
    cout << "Podaj rozmiar tablicy: ";
    cin >> n;
    cout << endl;


    //_______________________________________

    
    tab = Tab(n);
    Tab(tab, n);
    cout << "Tablica 0) :";
    for (int i = 0; i < n; i++)
    {
        cout << " | "; 
        cout.width(2); 
        cout << tab[i] << " |";
    }
    cout << endl;


    //______________________________________


    Swap(tab, n);
    cout << "tablica a) :";
    for (int i = 0; i < n; i++)
    {
        cout << " | ";
        cout.width(2);
        cout << tab[i] << " |";
    }
    Swap(tab, n);
    cout << endl;


    //______________________________________


    Left(tab, n);
    cout << "tablica b) :";
    for (int i = 0; i < n; i++)
    {
        cout << " | ";
        cout.width(2);
        cout << tab[i] << " |";
    }
    Right(tab, n);
    cout << endl;

    
    //________________________________________


    Right(tab, n);
    cout << "tablica c) :";
    for (int i = 0; i < n; i++)
    {
        cout << " | ";
        cout.width(2);
        cout << tab[i] << " |";
    }
    Left(tab, n);
    cout << endl;


    //________________________________________
    Sort_Up(tab, n);
    cout << "tablica d) :";
    for (int i = 0; i < n; i++)
    {
        cout << " | ";
        cout.width(2);
        cout << tab[i] << " |";
    }
    cout << endl;


    //________________________________________


    Sort_Down(tab, n);
    cout << "tablica e) :";
    for (int i = 0; i < n; i++)
    {
        cout << " | ";
        cout.width(2);
        cout << tab[i] << " |";
    }


    //________________________________________


    delete[] tab;
    return 0;
}
