#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	unordered_map<string, string> m;
	char d[11], f[11], line[25];

	while(gets(line))
	{
		if (strcmp(line, ""))
		{
			sscanf(line, "%s %s", &d, &f);
			m[f] = d;
		}
		else
		{
			while(gets(line))
			{
				if (m.find(line) != m.end())
					 printf("%s\n", m[line].c_str());
				else
					printf("eh\n");
			}
		}
	}

	return 0;
}
