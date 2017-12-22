// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Getline Three -  Calçados
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1218

#include <bits/stdc++.h>

using namespace std;

int main()
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int caso = 1, same, f, m;
	string nmr, calc, tam, lado;
	while(cin >> nmr)
	{
		same = f = m = 0;
		cin.get();
		getline(cin, calc);
		stringstream ss(calc);
		while(ss >> tam >> lado)
		{
			if (tam == nmr)
			{
				same++;
				if (lado == "M")
					m++;
				else
					f++;
			}
		}
		if (caso > 1)
			printf("\n");
		
		printf("Caso %d:\n", caso);
		printf("Pares Iguais: %d\n", same);
		printf("F: %d\n", f);
		printf("M: %d\n", m);
		caso++;
	}
	return 0;
}

