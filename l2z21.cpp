#include <iostream>


using namespace std;


int main()
{
	int n;
	cin >> n;

	int ** tablica = new int *[n+1];
	for (int i = 0; i < n; i++)
		tablica[i] = new int[n+1];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			tablica[i][j] = (i + 1) * (j + 1);

		}
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << tablica[i][j] << " | ";
		cout << endl;
	}



	for(int i = 0; i < n; i++)
		delete tablica[i];
	delete [] tablica;
	tablica = NULL;
	return 0;
}


