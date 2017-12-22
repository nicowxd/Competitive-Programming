#include <bits/stdc++.h>

using namespace std;

int main()
{

	int v[27] = {0}, ans = 0;
	string s;
	cin >> s;
	
	for (int i = 0; i < (int) s.size(); i++)
		v[s[i]-'a']++;
	
	for (int i = 0; i < 26; i++)
		if (v[i]&1)
			ans++;
	if (ans == 0 or ans&1)
		puts("First");
	else
		puts("Second");

	return 0;
}
