#include <bits/stdc++.h>

using namespace std;

const char ranks[] = {'6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};

bool first_higher(char a, char b) {
	int x, y;

	for (int i = 0; i < 9; i++){
		if (ranks[i] == a)
			x = i;
		if (ranks[i] == b)
			y = i;
	}
	return x > y;
}

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	string first, second;
	char trump;

	cin >> trump;
	cin >> first >> second;

	if (first[1] == second[1] && first_higher(first[0], second[0]))
		cout << "YES" << endl;
	else if (first[1] == trump && second[1] != trump)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
    return 0;
}
