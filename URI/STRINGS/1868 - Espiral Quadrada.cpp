#include <bits/stdc++.h>

using namespace std;

int n;

void print (int row, int col)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == row and j == col)
				printf("X");
			else
				printf("O");
		}
		printf("\n");
	}
	printf("@\n");
}

int main()
{

	while(scanf("%d", &n), n)
	{
		int i = 3, j = 1, center = n/2, row = n/2, col = n/2;
		
		print(center, center);
	
		while(i <= n)
		{
			//Direita
			while (col < center+j)
			{
				col++;
				print(row, col);

			}
			//Cima
			while(row > center-j)
			{
				row--;
				print(row, col);
			}
			//Esquerda
			while(col > center-j)
			{
				col--;
				print(row, col);
			}
			//Baixo
			while(row < center+j)
			{
				row++;
				print(row, col);
			}
			//Cont. direita
			while(col < center + j)
			{
				col++;
				print(row, col);
			}
			i += 2;
			j++;
		}
	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
