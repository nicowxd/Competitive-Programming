#include <bits/stdc++.h>

using namespace std;

int main()
{
	int words = 0, bullshits = 0, sumWords = 0;
	string s;
	set<string> b;

	while(getline(cin, s))
	{
		for (int i = 0; i < (int) s.size(); i++)
		{
			if (!isalpha(s[i]))
				s[i] = ' ';
		}

		stringstream ss(s);
		
		while(ss >> s)
		{
			for (int i = 0; i < (int) s.size(); i++)
				s[i] = toupper(s[i]);

			if (s == "BULLSHIT")
			{
				sumWords += words;
				words = 0;
				b.clear();
				bullshits++;
			}
			else
			{
				if (b.count(s) == 0)
				{
					b.insert(s);
					words++;
				}
			}
		}
	}
	
	int mdc = __gcd(sumWords, bullshits);
	printf("%d / %d\n", sumWords/mdc, bullshits/mdc);

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
