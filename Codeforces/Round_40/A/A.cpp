#include <bits/stdc++.h>

using namespace std;

int main()
{

	string a, b;
	cin >> a >> b;
	
	reverse(a.begin(), a.end());
	
	if (a == b)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
