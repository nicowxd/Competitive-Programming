// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Sudoku
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1383

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, mat[10][10], caso = 1;
	scanf("%d", &n);
	while(n--)
	{
		bool flag = true;
		for (int i = 0; i < 9; i++)
		{
			vector<int> v(10);
			for (int j = 0; j < 9; j++)
			{
				scanf("%d", &mat[i][j]);
				v[mat[i][j]]++;
				if (v[mat[i][j]] == 2)
					flag = false;
			}
		}
		for (int i = 0; i < 9; i++)
		{
			vector<int> v(10);
			for (int j = 0; j < 9; j++)
			{
				v[mat[j][i]]++;
				if (v[mat[j][i]] == 2)
					flag = false;
			}
		}
		for (int i = 0; i < 9; i+=3)
		{
			for (int j = 0; j < 9; j+=3)
			{
				vector<int> v(10);
				for (int k = i; k < i+3; k++)
				{
					for (int l = j; l < j + 3; l++)
					{
						v[mat[k][l]]++;
						if (v[mat[k][l]] == 2)
							flag = false;
					}
				}
			}
		}
		printf("Instancia %d\n", caso++);
		if (flag)
			printf("SIM\n\n");
		else
			printf("NAO\n\n");
	}
	return 0;
}
