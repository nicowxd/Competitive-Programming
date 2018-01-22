#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n;
	char a;

	scanf("%d ", &n);

	vector<char> s1, s2;

	for (int i = 0; i < n; i++)
	{
		scanf("%c", &a);
		s1.push_back(a);
	}

	for (int i = 0; i < n; i++)
	{
		scanf("%c", &a);
		s2.push_back(a);
	}

	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());

	bool inc;

	if (s1[0] > s2[0])
		inc = true;
	else if (s1[0] < s2[0])
		inc = false;
	else
	{
		puts("NO");
		return 0;
	}

	for (int i = 1; i < n; i++)
	{
		if (inc and s1[i] > s2[i])
			continue;
		else if (!inc and s1[i] < s2[i])
			continue;
		else
		{
			puts("NO");
			return 0;
		}
	}

	puts("YES");
	return 0;
}
