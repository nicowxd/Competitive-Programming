#include <bits/stdc++.h>

using namespace std;

int main()
{

	string s1, s2;
	int qty[100] = {0};

	getline(cin, s1);
	getline(cin, s2);

	for (int i = 0; i < (int) s1.size(); i++)
		qty[s1[i]-'A']++;
	
	for (int i = 0; i < (int) s2.size(); i++)
	{
		if (qty[s2[i]-'A'] == 0 and s2[i] != ' ')
		{
			printf("NO\n");
			return 0;
		}
		else
			qty[s2[i]-'A']--;
	}

	printf("YES\n");
}
