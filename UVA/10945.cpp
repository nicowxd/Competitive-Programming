#include <bits/stdc++.h>

using namespace std;

int main()
{

	string v;

	while(getline(cin,v))
	{
		if (v == "DONE")
			break;

		string ans = "", rev;

		for (int i = 0; i < (int) v.size(); i++)
		{
			if (v[i] == '.' or v[i] == ',' or v[i] == '!' or v[i] == '?' or v[i] == ' ')
				continue;
			ans += tolower(v[i]);
		}
		
		rev = ans;
		reverse(rev.begin(), rev.end());

		if (ans == rev)
			puts("You won't be eaten!");
		else
			puts("Uh oh..");
	}

	return 0;
}
