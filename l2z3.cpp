#include <list>
#include <iostream>


using namespace std;


void Tab(int liczba, int* rozmiar)
{
	list <int> l;
	for (int i = 1; i <= liczba; i++)
		if (liczba % i == 0)
			l.push_back(i);
	*rozmiar = l.size();

}
void Test(int up, int down, int** tablica, int* licznik)
{

	if (up % down == 0)
	{
		tablica[up - 1][*licznik] = down;
		*licznik = *licznik + 1;
	}
}

int main()
{
	int n, rozmiar = 0, liczba, wpis, up, down, licznik_tablicy = 1;
	int* wsk_rozmiar = &rozmiar;
	int* wsk_licznik_tablicy = &licznik_tablicy;

	cout << "Podaj liczbe ktora bedzie ostatnia liczba do stablicowania";
	cin >> n;


	int** tablica = new int* [n];
	for (int i = 0; i < n; i++)
	{
		liczba = i + 1;
		Tab(liczba, wsk_rozmiar);
		tablica[i] = new int[rozmiar + 1];
		tablica[i][0] = rozmiar;
	}



	for (int i = 0; i < n; i++)
	{
		licznik_tablicy = 1;
		for (int j = 1; j <= i + 1; j++)
		{
			Test(i + 1, j, tablica, wsk_licznik_tablicy);

		}
	}



	for (int i = 0; i < n; i++)
	{
		cout.width(3);
		cout << i + 1 << ":   ";
		wpis = tablica[i][0];
		for (int j = 1; j <= wpis; j++)
		{
			cout.width(3);
			cout << tablica[i][j] << "|";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++)
		delete tablica[i];
	delete[] tablica;
	tablica = NULL;
	return 0;
}