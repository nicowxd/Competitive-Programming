// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Bingo!
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1136

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, b, bolas[100];
	while(cin >> n >> b)
	{
		if (n == 0 and b == 0)
			break;
		int valores[100] = {0}, ans = 0;
		for (int i = 0; i < b; i++)
			cin >> bolas[i];
		
		for (int i = 0; i < b; i++)
		{
			for (int j = 0; j < b; j++)
			{
				int k = abs(bolas[i] - bolas[j]);
				if (valores[k] == 0)
				{
					valores[k] = 1;
					ans = ans + 1;
				}
			}
		}
		if (ans == n+1)
			cout << "Y\n";
		else
			cout << "N\n";
	}
	return 0;
}
		
	
