#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, A[101][101], maxSum, sum;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &A[i][j]);
	
	int ans[n];
	maxSum = -127*100*100;
	
	for (int l = 0; l < n; l++)
		for (int r = l; r < n; r++)
		{
			sum = 0;
			for (int row = 0; row < n; row++)
			{	
				if (r == l)
					ans[row] = A[row][r];
				
				else
					ans[row] += A[row][r];
				sum+=ans[row];
				maxSum = max(maxSum, sum);
					
				if (sum < 0)
					sum = 0;
			}
		}
		
	printf("%d\n", maxSum);
	return 0;
}
			
