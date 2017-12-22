#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, v[123] = {0};
	char s[1234];

	scanf("%d", &n);
	scanf("%s", s);
	
	for (int i = 0; s[i]; i++)
		v[s[i]-'a']++;
	
	for (int i = 0; i < 26; i++)
	{
		if (v[i]%n)
		{
			printf("-1\n");
			return 0;
		}
		else
			v[i]/=n;
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 26; j++)
			for (int k = 0; k < v[j]; k++)
				printf("%c", j+'a');

	printf("\n");	
	return 0;
}
