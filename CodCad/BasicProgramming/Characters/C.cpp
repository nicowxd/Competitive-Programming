#include <iostream>

using namespace std;

int main()
{
	int n, ans = 0;
	char bloco;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> bloco;
		if (bloco == 'P')
			ans = ans + 2;
		else if (bloco == 'C')
			ans = ans + 2;
		else if (bloco == 'A')
			ans = ans + 1;
	}
	
	cout << ans << "\n";
	return 0;
}
