#include <bits/stdc++.h>

using namespace std;

bool check(int x)
{
	bool flag = false;
	x = abs(x);
	while(x)
	{
		if (x%10 == 8)
			flag = true;
		x/=10;
	}
	return flag;
}

int main()
{

	int a;
	cin >> a;

	for (int b = 1; ; b++)
	{
		if (check(a+b))
		{
			printf("%d\n", b);
			return 0;
		}
	}
	return 0;
}
