#include <bits/stdc++.h>

using namespace std;

int main()
{

	string a, b;
	char f[20];
	cin >> a >> b;
	
	int x, y, z;
	sscanf(a.c_str(), "%d", &x);
	sscanf(b.c_str(), "%d", &y);

	z = x + y;

	sprintf(f, "%d", z);
	string c = "", d = "", e = "";

	for (int i = 0; i < (int) a.size(); i++)
	{
		if (a[i] != '0')
			c += a[i];
	}

	for (int i = 0; i < (int) b.size(); i++)
	{
		if (b[i] != '0')
			d += b[i];
	}
	
	for (int i = 0; i < strlen(f); i++)
	{
		if (f[i] != '0')
			e += f[i];
	}

	sscanf(c.c_str(), "%d", &x);
	sscanf(d.c_str(), "%d", &y);
	sscanf(e.c_str(), "%d", &z);

	if (x + y == z)
		puts("YES");
	else
		puts("NO");

	return 0;
}
