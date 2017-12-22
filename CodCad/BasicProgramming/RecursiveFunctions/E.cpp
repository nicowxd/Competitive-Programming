#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
	int n, x = 1;
	while(cin >> n and n != 0)
	{
		long long k = pow(2, n) - 1;
		if (x > 1)
			cout << "\n";
		cout << "Teste " << x++ << "\n";
		cout << k << "\n";
	}
	return 0;
}
		
		
