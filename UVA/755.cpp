#include <bits/stdc++.h>

using namespace std;

char transf(char k)
{
	char ans;
	if (k == 'A' or k == 'B' or k == 'C')
		ans = '2';
	else if (k == 'D' or k == 'E' or k == 'F')
		ans = '3';
	else if (k == 'G' or k == 'H' or k == 'I')
		ans = '4';
	else if (k == 'J' or k == 'K' or k == 'L')
		ans = '5';
	else if (k == 'M' or k == 'N' or k == 'O')
		ans = '6';
	else if (k == 'P' or k == 'R' or k == 'S')
		ans = '7';
	else if (k == 'T' or k == 'U' or k == 'V')
		ans = '8';
	else
		ans = '9';
	return ans;
}
	

int main()
{

	int t;
	scanf("%d", &t);

	while(t--)
	{
		int n;
		char str[10000], *p;
		string s;
		map<string, int> m;
		m.clear();

		scanf("%d", &n);

		for (int i = 0; i < n; i++)
		{
			scanf(" %s", str);
			
			int sum = 0;
			s = "";
			for (p = strtok(str, "-"); p; p = strtok(NULL, "-"))
			{
				for (int j = 0; j < strlen(p); j++)
				{
					if (sum == 3)
						s += '-';
					if (isalpha(p[j]))
						s += transf(p[j]);
					else
						s += p[j];
					sum++;
				}
			}
			m[s]++;
		}
	
		vector< pair<string, int> > ans;
		for (auto it = m.begin(); it != m.end(); it++)
		{
			if (it->second != 1)
				ans.push_back(make_pair(it->first, it->second));
		}
		if ((int) ans.size() == 0)
			printf("No duplicates.\n");
		else
		{
			for (int i = 0; i < (int) ans.size(); i++)
				cout << ans[i].first << " " << ans[i].second << endl;
		}

		if (t)
			printf("\n");
	}



	return 0;
}
