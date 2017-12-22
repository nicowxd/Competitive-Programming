// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Plano de Dieta
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1248

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	
	int n, pos, bsize, csize;
	string dieta,cafe,almo;
	bool flag;
	scanf("%d", &n);
	cin.get();
	while(n--)
	{
		getline(cin, dieta);
		getline(cin, cafe);
		getline(cin, almo);
		
		bsize = cafe.length();
		csize = almo.length();

		flag = false;

		for(int i = 0; i < bsize; i++)
		{
		 	pos = dieta.find(cafe[i]);

			if (pos == -1)
			{
				flag = true;
				break;
			}
			else
			{
				dieta.erase(pos, 1);
			}
		}

		for (int i = 0; i < csize; i++)
		{
			pos = dieta.find(almo[i]);

			if (pos == -1)
			{
				flag = true;
				break;
			}
			else
			{
				dieta.erase(pos, 1);
			}
		}

		if (flag)
			printf("CHEATER\n");
		else
		{
			sort(dieta.begin(), dieta.end());
			cout << dieta << endl;
		}
	}
	return 0;
}


