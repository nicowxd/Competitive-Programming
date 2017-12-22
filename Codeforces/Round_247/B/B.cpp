#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int mat[5][5], p[5] = {0, 1, 2, 3, 4};

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			scanf("%d", &mat[i][j]);
	
	int ans = 0;
	do {
		int sum = mat[p[0]][p[1]] + mat[p[1]][p[0]] + mat[p[1]][p[2]] + mat[p[2]][p[1]]+ 2*(mat[p[2]][p[3]] + mat[p[3]][p[2]]) + 2*(mat[p[3]][p[4]] + mat[p[4]][p[3]]);
		ans = max(ans, sum);

	}while (next_permutation(p, p+5));
	
	printf("%d\n", ans);

	return 0;
}
