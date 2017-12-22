#include <bits/stdc++.h>

using namespace std;

int mat[8][8], ans, cols[8];
bitset<30> col, ld, rd;

void backtrack(int r)
{
	if (r == 8)
	{
		int acc = 0;
		for (int i = 0; i < 8; i++)
			acc += mat[i][cols[i]];
		ans = max(ans, acc);
		return;
	}
	
	for (int c = 0; c < 8; c++)
	{
		if (col[c] or ld[c+r] or rd[c-r+7])
			continue;
		col[c] = ld[c+r] = rd[c - r + 7] = 1;
		cols[r] = c;
		backtrack(r+1);
		col[c] = ld[c+r] = rd[c - r + 7] = 0;
	}
}
		
int main()
{

	int k;
	scanf("%d", &k);
	
	while(k--)
	{
		ans = 0;
		col.reset(); ld.reset(); rd.reset();
		
		for (int i = 0; i < 8; i++)
			for (int j = 0; j < 8; j++)
				scanf("%d", &mat[i][j]);
		backtrack(0);
		printf("%5d\n", ans);
	}

	return 0;
}
