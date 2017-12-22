#include <bits/stdc++.h>

using namespace std;

int main()
{

	int c, n, app, ver;
	map<int, int> emp;
	map<int, int> ans;
	map<int, int>::iterator it;
	scanf("%d %d", &c, &n);
		
	for (int i = 0; i < c; i++)
	{
		scanf("%d %d", &app, &ver);
		emp[app] = ver;
	}
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &app, &ver);
		if (emp.find(app) == emp.end())
			ans[app] = ver;
		else
		{
			if (emp[app] < ver)
			{
				if (ans.find(app) == ans.end())
					ans[app] = ver;
				else
					if (ans[app] < ver)
						ans[app] = ver;
			}
		}
			
	}
	
	for (it = ans.begin(); it != ans.end(); it++)
		printf("%d %d\n", it->first, it->second);
	
	return 0;
}
