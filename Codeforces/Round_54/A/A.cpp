#include <bits/stdc++.h>

using namespace std;

int main()
{
	string word;
	size_t pos = 0;
	cin >> word;
	while(pos < word.size() && word[pos] != 'h')
		pos++;
	pos++;
	while(pos < word.size() && word[pos] != 'e')
		pos++;
	pos++;
	while(pos < word.size() && word[pos] != 'l')
		pos++;
	pos++;
	while(pos < word.size() && word[pos] != 'l')
		pos++;
	pos++;
	while(pos < word.size() && word[pos] != 'o')
		pos++;
	
	if (pos < word.size())
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
