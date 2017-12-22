#include <bits/stdc++.h>

using namespace std;

int main()
{

	int m, s;

	scanf("%d %d", &m, &s);

	if (s == 0 and m == 1)
	{
		puts("0 0");
		return 0;
	}
	else if (s == 0 or m*9 < s)
	{
		puts("-1 -1");
		return 0;
	}

	int sum = s;
	string minn = "";

	for (int i = 0; i < m; i++)
	{
		for (int d = (i == 0 ? 1 : 0); d <= 9; d++)
		{
			if (sum-d <= 9*(m-i-1))
			{
				minn += char('0' + d);
				sum -= d;
				break;
			}
		}
	}
	
	sum = s;
	string maxx = "";
	
	for (int i = 0; i < m; i++)
	{
		for (int d = 9; d >= 0; d--)
		{
			if (sum-d >= 0)
			{
				maxx += char('0' + d);
				sum -= d;
				break;
			}
		}
	}

	cout << minn << " " << maxx << endl;
	return 0;
}
