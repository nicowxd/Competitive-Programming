#include <iostream>

using namespace std;

int main()
{
	int n, s, a, menor = 1e9;
	cin >> n >> s;
	
	while(n--)
	{
		cin >> a;
		s = s + a;
		if (s < menor)
			menor = s;
	}
	
	cout << menor << "\n";
	return 0;
}
