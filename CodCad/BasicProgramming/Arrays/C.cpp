#include <iostream>

using namespace std;

int main()
{
	int n, tam[100000], acc1 = 0, acc2 = 0;		
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> tam[i];
		acc1 = acc1 + tam[i];
	}
	
	for (int i = 0; i < n; i++)
	{
		acc2 = acc2 + tam[i];
		acc1 = acc1 - tam[i];
		if (acc2 == acc1)
		{
			cout << i + 1 << "\n";
			break;
		}
	}
	
	return 0;
} 
