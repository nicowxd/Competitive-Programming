#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	string word;
	char c;
	cin >> word;

	c = toupper(word[0]);
	printf("%c", c);	

	for (int i = 1; i <(int) word.size();i++)
		cout << word[i];

	cout << "\n";
	return 0;
}
