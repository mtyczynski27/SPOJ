#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int punkty = 0;
    for (int i = 0; i < s1.length(); ++i)
    {
        if (s1[i] != s2[i] || s1[i] != s3[i])
        {
            if (s2[i] == s3[i])
                punkty += 2;
			else
				punkty++;
        }
    }
    cout << punkty;
}
