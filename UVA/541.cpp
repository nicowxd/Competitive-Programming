#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	while(scanf("%d", &n), n)
	{
		int matrix[101][101];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				scanf("%d", &matrix[i][j]);
			
		int sumRow[100] = {0}, sumCol[100] = {0};
		
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				sumRow[i]+= matrix[i][j];
				sumCol[i]+= matrix[j][i];
			}
		}
			
		int ansR, ansC, qtyR = 0, qtyC = 0;
		for (int i = 0; i < n; i++)
		{
			if (sumRow[i] % 2)
			{
				qtyR++;
				ansR = i+1;
			}
			if (sumCol[i] % 2)
			{
				qtyC++;
				ansC = i+1;
			}
		}

		if (qtyR == 0 && qtyC == 0)
			printf("OK\n");
		else if (qtyR == 1 && qtyC == 1)
			printf("Change bit (%d,%d)\n", ansR, ansC);
		else
			printf("Corrupt\n");
	}
	return 0;
}
