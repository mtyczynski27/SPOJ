#include <iostream>
using namespace std;
int main ()
{
	ios_base::sync_with_stdio(0);
	string s, h, g, pg="p";
	int A, B, C, D, W, L, n, k;
	char c, slash=92;

	cin >> n;
	for (int i=0; i<n; i++)
	{
		cin >> s >> k;

		W = 0;
		L = 7;
		g = "-";
		// Na poczatku:
		// 1, 2 i 3
		cout << "Welcome to the Hangman Game!" << endl << "+---------------------+" << endl << "|    ____________     |" << endl << "|    |/               |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|  __|__              |" << endl << "+---------------------+" << endl << "Secret word:" << endl;

		// 4
		h = s;
		for (int j=0; j<h.size(); j++)
		{
			h[j] = '_';
			cout << h[j] << " ";
		}
		cout << endl << endl;

		for (int j=0; j<k || W==1 || L==0; j++)
		{
			A = 0;
			B = 0;
			C = 0;
			D = 0;

		if (L > 0)
		{

			// 1
			cout << "Number of mistakes left: " << L << endl;

			// 2
			cout << "Guesses: " << g << endl;

			// 3
			cout << "Please guess a letter!" << endl;

		}

			// 4
			cin >> c;
		if (L > 0)
		{
			cout << "Your choice: " << c << endl;

			// zamiana malych liter na duze
			if (c >= 97 && c <= 122)
				c = c - 32;

			// 5A
			if (c < 65 || c > 90)
			{
				A++;
			}
			if (A > 0)
				cout << "Only Latin alphabet letters!" << endl;

			// 5B
			for (int l=0; l<g.size(); l++)
			{
				if (c == g[l])
				{
					B++;
					break;
				}
			}
			if (B > 0)
				cout << "You've already guessed that letter!" << endl;

			// 5C i 5D
			for (int l=0; l<s.size(); l++)
			{
				if (c == s[l])
				{
					C++;
					D++;
					h[l] = c;
				}
			}
			if (A == 0 && C == 0 && B == 0)
				cout << "Nope!" << endl;

			if (h == s)
				W++;
			else if (D > 0 && B == 0 && W == 0)
				cout << "Nice!" << endl;

			// 2CD.
			if (g[0] == '-')
				g[0] = c;
			else if (A == 0 && B == 0)
			{
				g.insert(g.size()-1, pg);
				g[g.size()-2] = g[g.size()-1];
				g[g.size()-1] = c;
			}

			// 6A
			if (A > 0 || B > 0 || C == 0)
			{
				if (L == 7)
					cout << "+---------------------+" << endl << "|    ____________     |" << endl << "|    |/         |     |" << endl << "|    |          |     |" << endl << "|    |          |     |" << endl << "|    |          &     |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|  __|__              |" << endl << "+---------------------+" << endl;
				else if (L == 6)
					cout << "+---------------------+" << endl << "|    ____________     |" << endl << "|    |/         |     |" << endl << "|    |          |     |" << endl << "|    |         (_)    |" << endl << "|    |          &     |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|  __|__              |" << endl << "+---------------------+" << endl;
				else if (L == 5)
					cout << "+---------------------+" << endl << "|    ____________     |" << endl << "|    |/         |     |" << endl << "|    |          |     |" << endl << "|    |         (_)    |" << endl << "|    |          &     |" << endl << "|    |          |     |" << endl << "|    |          |     |" << endl << "|    |          |     |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|  __|__              |" << endl << "+---------------------+" << endl;
				else if (L == 4)
					cout << "+---------------------+" << endl << "|    ____________     |" << endl << "|    |/         |     |" << endl << "|    |          |     |" << endl << "|    |         (_)    |" << endl << "|    |          &     |" << endl << "|    |         /|     |" << endl << "|    |        / |     |" << endl << "|    |          |     |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|  __|__              |" << endl << "+---------------------+" << endl;
				else if (L == 3)
					cout << "+---------------------+" << endl << "|    ____________     |" << endl << "|    |/         |     |" << endl << "|    |          |     |" << endl << "|    |         (_)    |" << endl << "|    |          &     |" << endl << "|    |         /|" << slash << "    |" << endl << "|    |        / | " << slash << "   |" << endl << "|    |          |     |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|    |                |" << endl << "|  __|__              |" << endl << "+---------------------+" << endl;
				else if (L == 2)
					cout << "+---------------------+" << endl << "|    ____________     |" << endl << "|    |/         |     |" << endl << "|    |          |     |" << endl << "|    |         (_)    |" << endl << "|    |          &     |" << endl << "|    |         /|" << slash << "    |" << endl << "|    |        / | " << slash << "   |" << endl << "|    |          |     |" << endl << "|    |         /      |" << endl << "|    |        /       |" << endl << "|    |                |" << endl << "|  __|__              |" << endl << "+---------------------+" << endl;
				else if (L == 1)
					cout << "+---------------------+" << endl << "|    ____________     |" << endl << "|    |/         |     |" << endl << "|    |          |     |" << endl << "|    |         (_)    |" << endl << "|    |          &     |" << endl << "|    |         /|" << slash << "    |" << endl << "|    |        / | " << slash << "   |" << endl << "|    |          |     |" << endl << "|    |         / " << slash << "    |" << endl << "|    |        /   " << slash << "   |" << endl << "|    |                |" << endl << "|  __|__              |" << endl << "+---------------------+" << endl;
				L--;
			}

			// 6B
			else if (D > 0 && B == 0 && W == 0)
			{
				cout << "Secret word:" << endl;
				for (int j=0; j<h.size(); j++)
					cout << h[j] << " ";
				// 7
				cout << endl;
			}

			// NA KONIEC:
			// 1A
			if (W == 1)
			{
				cout << endl <<"You won!" << endl;
				cout << "Secret: " << s;
			}

			// 1B
			else if (L == 0)
			{
				cout << endl << "Game Over!" << endl;
				cout << "Secret: " << s << endl;
			}

			if (j == k-1)
				cout << endl;

			cout << endl;
		}
		}
	}
}
