#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;

	if ((int) a.size() != (int) b.size())
	{
		puts("NO");
		return 0;
	}
	int cnt = 0, idx;
	for (int i = 0; i < (int) a.size() and cnt < 2; i++)
	{
		if (cnt == 0 and a[i] != b[i])
		{
			idx = i;
			cnt++;
		}
		else if (cnt == 1 and a[i] != b[i])
		{
			swap(a[i], a[idx]);
			cnt++;
		}
	}
	
	if (cnt == 2 and a == b)
		puts("YES");
	else
		puts("NO");
	return 0;
}
