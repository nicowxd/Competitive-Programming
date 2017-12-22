#include <iostream>

using namespace std;

int ans = 0, mat[100][100], direc[100][100] = {0}, visit[100][100] = {0};	

void dfs(int i, int j, int n)
{
	if (i < 0 || i >= n || j < 0 || j >= n)
		return;
	else
	{
		if (!visit[i][j])
		{
			ans++;
			visit[i][j] = 1;
			if ((direc[i][j] % 4) ==  0 and mat[i][j+1] >= mat[i][j])
				dfs(i, j+1, n);
			direc[i][j]++;
			if ((direc[i][j] % 4) == 1 and mat[i+1][j] >= mat[i][j])
				dfs(i+1, j, n);
			direc[i][j]++;
			if ((direc[i][j] % 4) == 2 and mat[i][j-1] >= mat[i][j])
				dfs(i, j-1, n);
			direc[i][j]++;
			if ((direc[i][j] % 4) == 3 and mat[i-1][j] >= mat[i][j])
				dfs(i-1, j, n);
			direc[i][j]++;
		}
	}	
}
			
	
int main()
{

	int n, x, y;
	cin >> n;
	
	cin >> x >> y;	
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> mat[i][j];
	
	dfs(x-1, y-1, n);
	
	cout << ans << endl;
		
	return 0;
}
