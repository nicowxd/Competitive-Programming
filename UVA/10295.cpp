#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int m, n, d;
	string buff, s;
	map<string, int> job;

	scanf("%d %d", &m, &n);
	
	for (int i = 0; i < m; i++)
	{	
		cin >> s >> d;
		job[s] = d;
	}

	long long ans = 0;
	while(getline(cin, buff) and n)
	{
		if (buff == ".")
		{
			n--;
			printf("%lld\n", ans);
			ans = 0;
		}
		else
		{
			stringstream ss;
			ss << buff;
			while(ss >> s)
			{
				if (job.find(s) != job.end())
					ans += job[s];
			}
		}
	}

	return 0;
}
