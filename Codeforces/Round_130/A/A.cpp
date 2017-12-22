#include <bits/stdc++.h>

using namespace std;

int main()
{
	string dub;
	int a;
	cin >> dub;
	a = dub.find("WUB");
	while(a != -1)
	{
		dub.replace(a,3, " ");
		a = dub.find("WUB");
	}
	cout << dub << "\n";
	return 0;
}
