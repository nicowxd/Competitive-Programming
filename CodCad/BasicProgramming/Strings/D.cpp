#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string x, vogal = "";
	cin >> x;
	
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] == 'a' or x[i] == 'e' or x[i] == 'i' or x[i] == 'o' or x[i] == 'u')
			vogal = vogal + x[i];
	}
	
	string ans = vogal;
	reverse(ans.begin(), ans.end());
	
	if (ans == vogal)
		cout << "S\n";
	else
		cout << "N\n";
	
	return 0;
}
