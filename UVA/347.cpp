#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, caso = 1, v[9876543] = {0};
	char str[10];
	
	for (int j = 9876543; j > 9; j--)
	{
		sprintf(str, "%d", j);
		int len = strlen(str);
		
		bool vispos[10] = {0}, visnum[10] = {0}, fail = false;
		
		int pos = 0;

		for (int i = 0; i < len and !fail; i++)
		{
			if (vispos[pos] or visnum[str[pos] - '0'])
				fail = true;
			else
			{
				vispos[pos] = true;
				visnum[str[pos] - '0'] = true;
			}
			pos = ((str[pos] - '0') + pos) % len;
		}
		
		if (!fail and pos == 0)
			v[j] = j;
		else
			v[j] = v[j+1];
	}

	while(scanf("%d", &n) && n)
		printf("Case %d: %d\n", caso++, v[n]);

	return 0;
}
