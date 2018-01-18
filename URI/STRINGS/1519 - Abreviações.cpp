#include <bits/stdc++.h>

using namespace std;

int main()
{

	string s, p;
	
	map<char, string> m;
	map<string, int> c;

	while(getline(cin, s))
	{
		if (s == ".")
			break;
		m.clear();
		c.clear();

		stringstream ss;
		ss << s;
		while(ss >> p)
		{
			if (p.size() > 2)
			{
				c[p] += (p.size()-2);
				if (c[m[p[0]]] < c[p])
					m[p[0]] = p;
			}
		}
		ss.clear();
		int c = 1;
		ss << s;
		while(ss >> p)
		{
			if (c++ > 1)
				printf(" ");
			if (m.count(p[0]) > 0)
			{
				if (m[p[0]] == p)
					printf("%c.", p[0]);
				else
					printf("%s", p.c_str());
			}
			else
				printf("%s", p.c_str());
		}
		printf("\n");
		cout << m.size() << endl;
		for (auto x : m)
			cout << x.first << ". = " << x.second << endl;
	}


	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
