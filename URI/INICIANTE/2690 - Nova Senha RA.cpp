#include <bits/stdc++.h>

using namespace std;

int main()
{

	map<char, char> m;
	m['G'] = m['Q'] = m['a'] = m['k'] = m['u'] = '0';
	m['I'] = m['S'] = m['b'] = m['l'] = m['v'] = '1';
	m['E'] = m['O'] = m['Y'] = m['c'] = m['m'] = m['w'] = '2';
	m['F'] = m['P'] = m['Z'] = m['d'] = m['n'] = m['x'] = '3';
	m['J'] = m['T'] = m['e'] = m['o'] = m['y'] = '4';
	m['D'] = m['N'] = m['X'] = m['f'] = m['p'] = m['z'] = '5';
	m['A'] = m['K'] = m['U'] = m['g'] = m['q'] = '6';
	m['C'] = m['M'] = m['W'] = m['h'] = m['r'] = '7';
	m['B'] = m['L'] = m['V'] = m['i'] = m['s'] = '8';
	m['H'] = m['R'] = m['j'] = m['t'] = '9';

	int n;
	string s;
	scanf("%d ", &n);
	
	while(n--)
	{
		string ans = "";
		getline(cin, s);
		stringstream ss(s);

		while(ss >> s)
		{
			for (int i = 0; i < (int) s.size() and (int) ans.size() < 12; i++)
				ans += m[s[i]];
		}

		cout << ans << endl;
	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
