#include <bits/stdc++.h>

using namespace std;

int main()
{

	string x;

	cin >> x;

	int tam = (int) x.size() - 1;

	while(x[tam] == '0')
		tam--;
	
	int zer = ((int) x.size() - 1) - tam;

	string ans = "";
	
	for (int i = 0; i < zer; i++)
		ans += '0';
	ans += x;
	
	string rev = ans;
	reverse(ans.begin(), ans.end());
	
	if (rev == ans)
		puts("YES");
	else
		puts("NO");
	return 0;
}
