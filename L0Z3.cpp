#include <iostream>
using namespace std;

double* Tab( int n)
{
    double* t = new double[n];
    return t;
}



int main()
{
    int n;
    double *t;
    cout << "Podaj rozmiar tablicy: ";
    cin >> n;
    cout << endl;
    
    t = Tab(n);
    
    delete[] t;
    return 0;
}


