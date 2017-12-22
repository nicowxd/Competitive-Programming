#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int m, n, i, maior, soma, sobra = 0;
	int x[1000], y[1000], saida[1000];

	cin >> m >> n;
	
	for (i = 0; i < m; i++)
		cin >> x[i];
	for (i = 0; i < n; i++)
		cin >> y[i];
	
	if (m > n)
	{
		maior = m;
		for (int i = n; i < maior; i++)
			y[i] = 0;
	}
	else
	{
		maior = n;
		for (int i = m; i < maior; i++)
			x[i] = 0;
	} 
	
	for (i = maior-1; i >= 0; i--)
	{
		soma = x[i] + y[i] + sobra;
		if (soma <= 1)
			sobra = 0;
		else
			sobra = 1;
		
		saida[i] = soma % 2;
	}
	
	while(saida[maior-1] == 0)
		maior--;
	
	for (i = 0; i < maior; i++)
		cout << saida[i] << " ";
	cout << "\n";
			
	return 0;
}
