#include <iostream>
using namespace std;
int main ()
{
	int D, N, a, b, s0, s1, s2, s3, w0, w1;
	cin >> D;
	if (1 <= D <= 50)
	{
		for (int i=0; i<D; i++)
		{
			cin >> N;
			s0 = 0;
			s1 = 0;
			s2 = 0;
			s3 = 0;
			if (0 <= N <= 100000)
			{
				for (int j=0; j<N; j++)
				{
					cin >> a >> b;
					if (0 <= a <= 3 && 1 <= b <= 10000)
					{
						if (a == 0)
							s0 = s0 + b;
						else if (a == 1)
							s1 = s1 + b;
						else if (a == 2)
							s2 = s2 + b;
						else if (a == 3)
							s3 = s3 + b;
					}
				}
			}
			if (s0 >= s1)
			{
				w0 = s0 - s1;
				if (w0 != 0)
					cout << "0" << " " << w0;
			}
			else if (s1 >= s0)
			{
				w0 = s1 - s0;
				if (w0 != 0)
					cout << "1" << " " << w0;
			}

			if (s2 - s3 == 0 && w0 == 0 || s3 - s2 == 0 && w0 == 0)
				cout << "studnia" << endl;
			else if (s2 - s3 == 0 || s3 - s2 == 0 && w0 != 0)
				cout << endl;
			else if (s2 >= s3)
			{
				w1 = s2 - s3;
				cout << endl << "2" << " " << w1 << endl;
			}
			else if (s3 >= s2)
			{
				w1 = s3 - s2;
				cout << endl << "3" << " " << w1 << endl;
			}
		}
	}
}
