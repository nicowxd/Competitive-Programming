#include <bits/stdc++.h>

using namespace std;

int main()
{

	string s, buff, k;
	set<string> ans;

	while(getline(cin, s))
	{
		buff = "";
		for (int i = 0; i < (int) s.size(); i++)
		{
			if (isalpha(s[i]))
				buff += s[i];
			else
				buff += " ";
		}
		
		stringstream ss;
		ss << buff;
		while(ss >> k)
		{
			for (int i = 0; i < (int) k.size(); i++)
				k[i] = tolower(k[i]);
			ans.insert(k);
		}
	}

	for (auto it = ans.begin(); it != ans.end(); it++)
		cout << *it << endl;
	return 0;
}
