#include <iostream>

using namespace std;

int soma(int x)
{
	if (x == 1)
		return 1;
	return x + soma(x-1);
}

int main()
{
	int n;
	cin >> n;
	cout << soma(n) << "\n";
	return 0;
}
