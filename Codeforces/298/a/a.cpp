#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int n;
	string s;
	
	cin >> n >> s;
	
	int idxR = -1, idxL = -1;

	for (int i = 0; i < (int) s.size(); i++) {
		if (s[i] == 'R' && idxR == -1)
			idxR = i;
		if (s[i] == 'L')
			idxL = i;
	}

	if (idxR == -1) {
		int end = idxL;
		while(s[end] != '.')
			end--;
		cout << idxL + 1 << " " << end + 1 << endl;
	}
	else if (idxL == -1) {
		int end = idxR;
		while(s[end] != '.')
			end++;
		cout << idxR + 1 << " " << end + 1 << endl;
	}
	else {
		int end = idxR;
		while(s[end] == 'R')
			end++;
		cout << idxR + 1 << " " << end  << endl;
	}
    return 0;
}
