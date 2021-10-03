

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	enum Game {cross,circle,free};
	Game Board[3][3];
	int i, j;
	bool Turn = 0, Condition = 0, Result = 0;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			Board[i][j] = free;
	
	

	do
	{
		cout << "numeracja pol" << endl << "| 0,0 | 0,1 | 0,2 |" << endl << "| 1,0 | 1,1 | 1,2 |" << endl << "| 2,0 | 2,1 | 2,2 |" << endl;
		
		cout << endl << "Plansza" << endl;
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
				if (Board[i][j] == circle)
					cout << "| " << "O" << " |";
				else if (Board[i][j] == cross)
					cout << "| " << "X" << " |";
				else
					cout << "| " << "_" << " |";
			cout << endl;
		}

		cout << endl << "podaj pole zgodnie z tablica numeracja pol (2 liczby oddzielone przecinkiem)" << endl;
		if (Turn == 0)
			do
			{
				cout << "Gracz 1" << endl;
				cin >> i >> j;
				if (Board[i][j] == free)
				{
					Board[i][j] = circle;
					Turn = 1;
					Condition = 0;
				}
				else
				{
					cout << "Pole zajete, podaj ponownie pole" << endl;
					Condition = 1;
				}
			} while (Condition == 1);
		else
			do
			{
				cout << "Gracz 2" << endl;
				cin >> i >> j;
				if (Board[i][j] == free)
				{
					Board[i][j] = cross;
					Turn = 0;
					Condition = 0;
				}
				else
				{
					cout << "Pole zajete, podaj ponownie pole" << endl;
					Condition = 1;
				}
			} while (Condition == 1);

			
			system("cls");
			if (Board[0][0] == circle && Board[0][1] == circle && Board[0][2] == circle)
				Result = 1;
			else if (Board[0][0] == cross && Board[0][1] == cross && Board[0][2] == cross)
				Result = 1;
			else if (Board[1][0] == circle && Board[1][1] == circle && Board[1][2] == circle)
				Result = 1;
			else if (Board[1][0] == cross && Board[1][1] == cross && Board[1][2] == cross)
				Result = 1;
			else if (Board[2][0] == circle && Board[2][1] == circle && Board[2][2] == circle)
				Result = 1;
			else if (Board[2][0] == cross && Board[2][1] == cross && Board[2][2] == cross)
				Result = 1;
			else if (Board[0][0] == circle && Board[1][0] == circle && Board[2][0] == circle)
				Result = 1;
			else if (Board[0][0] == cross && Board[1][0] == cross && Board[2][0] == cross)
				Result = 1;
			else if (Board[0][1] == circle && Board[1][1] == circle && Board[2][1] == circle)
				Result = 1;
			else if (Board[0][1] == cross && Board[1][1] == cross && Board[2][1] == cross)
				Result = 1;
			else if (Board[0][2] == circle && Board[1][2] == circle && Board[2][2] == circle)
				Result = 1;
			else if (Board[0][2] == cross && Board[1][2] == cross && Board[2][2] == cross)
				Result = 1;
			else if (Board[0][0] == circle && Board[1][1] == circle && Board[2][2] == circle)
				Result = 1;
			else if (Board[0][0] == cross && Board[1][1] == cross && Board[2][2] == cross)
				Result = 1;
			else if (Board[0][2] == circle && Board[1][1] == circle && Board[2][0] == circle)
				Result = 1;
			else if (Board[0][2] == cross && Board[1][1] == cross && Board[2][0] == cross)
				Result = 1;

			


	} while (Result == 0);

	cout << endl << "Plansza" << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			if (Board[i][j] == circle)
				cout << "| " << "O" << " |";
			else if (Board[i][j] == cross)
				cout << "| " << "X" << " |";
			else
				cout << "| " << "_" << " |";
		cout << endl;
	}
	if (Turn == 1)
		cout << "Gratulacje graczu 1, wygrales";
	else
		cout << "Gratulacje graczu 2, wygrales";
	return 0;
    
}

