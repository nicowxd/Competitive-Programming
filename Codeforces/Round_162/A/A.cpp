#include <bits/stdc++.h>

using namespace std;

int main()
{

	string s, t;
	cin >> s >> t;

	int idxT = 0, idxS = 0, ans = 1;
	
	while(idxT < (int) t.size())
	{
		if (t[idxT] == s[idxS])
		{
			ans++;
			idxS++;
		}
		idxT++;
	}

	printf("%d\n", ans);
	return 0;
}
