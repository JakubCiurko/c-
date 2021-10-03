#include <iostream>
using namespace std;

void Tab(double* t, double*tab, int n)
{
    t[0] = n;
    tab[0] = 0;
    for (int i = 1; i < n; i++)
    {
        t[i] = 10 % i;
    }
    for (int i = 1; i < n; i++)
    {
        tab[i] = 154 % i;
    }
}

double Scalar(double t[], double tab[], int n)
{
    double scalar = 0;
    for (int i = 0; i < n; i++)
        scalar = scalar + (t[i] * tab[i]);
    return scalar;
}

int main()
{
    int n;
    double scalar;
    cout << "Podaj rozmiar tablicy: ";
    cin >> n;
    cout << endl;
    double* t = new double[n];
    double* t_2 = new double[n];
    Tab(t, t_2, n);
    scalar = Scalar(t, t_2, n);
    cout <<"iloczyn skalarny wynosi: " << scalar;
    
    delete[] t;
    delete[] t_2;
    return 0;
}