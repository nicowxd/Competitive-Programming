#include <bits/stdc++.h>

using namespace std;

int main()
{

	char str[1010];

	while(scanf("%s", str) != EOF)
	{
		int dig[26] = {0}, len = strlen(str);

		for (int i = 0; i < len; i++)
			dig[str[i]-'a']++;
		
		int odd = 0;

		for (int i = 0; i < 26; i++)
		{
			if (dig[i]&1)
				odd++;
		}

		if (len&1 and odd == 1)
			puts("0");
		else if (len % 2 == 0 and odd == 0)
			puts("0");
		else 
			printf("%d\n", odd-1);
	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
