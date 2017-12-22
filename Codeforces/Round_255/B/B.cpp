#include <bits/stdc++.h>

using namespace std;

string s;
int w[27];

int f(int len)
{
	int ans = 0;
	for (int i = 1; i <= len; i++)
		ans += w[s[i-1]-'a']*i;
	
	return ans;
}

int main()
{

	int k, x;
	cin >> s >> k;
	getchar();

	char big;
	int ac = 0;
	for (int i = 0; i < 26; i++)
	{
		scanf("%d", &w[i]);
		if (w[i] > ac)
		{
			ac = w[i];
			big = 'a' + i;
		}
	}
	
	for (int i = 0; i < k; i++)
		s += big;
	
	int len = (int) s.size();
	printf("%d\n", f(len));
	return 0;
}
