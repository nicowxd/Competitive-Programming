#include <bits/stdc++.h>

using namespace std;

int main()
{

	int k = 1;
	string s;
	map<string, int> word;

	s = "";
	for (char a = 'a'; a <= 'z'; a++)
	{
		s = a;
		word[s] = k++;
	}
	
	s = "";
	for (char a = 'a'; a <= 'z'; a++)
	{
		for (char b = a+1; b <= 'z'; b++)
		{
			s = a;
			s += b;
			word[s] = k++;
		}
	}
	
	s = "";
	for (char a = 'a'; a <= 'z'; a++)
	{
		for (char b = a+1; b <= 'z'; b++)
		{
			for (char c = b+1; c <= 'z'; c++)
			{
				s = a;
				s += b;
				s += c;
				word[s] = k++;
			}
		}
	}

	s = "";
	for (char a = 'a'; a <= 'z'; a++)
	{
		for (char b = a+1; b <= 'z'; b++)
		{
			for (char c = b+1; c <= 'z'; c++)
			{
				for (char d = c+1; d <= 'z'; d++)
				{
					s = a;
					s += b;
					s += c;
					s += d;
					word[s] = k++;
				}	
			}
		}
	}

	s = "";
	for (char a = 'a'; a <= 'z'; a++)
	{
		for (char b = a+1; b <= 'z'; b++)
		{
			for (char c = b+1; c <= 'z'; c++)
			{
				for (char d = c+1; d <= 'z'; d++)
				{
					for (char e = d+1; e <= 'z'; e++)
					{
						s = a;
						s += b;
						s += c;
						s += d;
						s += e;
						word[s] = k++;
					}
				}
			}
		}
	}

	while(cin >> s)
	{
		if (word.find(s) != word.end())
			cout << word[s] << endl;
		else
			cout << "0" << endl;
	}
	return 0;
}
