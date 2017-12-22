#include <bits/stdc++.h>


using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

vector<vii> AdjList;
vi dfs_num;
void dfs(int u)
{
	dfs_num[u] = 1;
	for (int i = 0; i < (int) AdjList[u].size(); i++)
	{
		ii v = AdjList[u][i];
		if (dfs_num[v.first] == 0)
			dfs(v.first);
	}
}
int main()
{

	int n;
	cin >> n;	
	
	while(n--)
	{	
		char node;
		cin >> node;

		int N;
		N = node - 'A' + 1;
		cin.ignore();
		AdjList.assign(N, vii());
		dfs_num.assign(N, 0);
		string vtx;
		while(getline(cin, vtx) and vtx != "")
		{
			AdjList[vtx[0]-'A'].push_back(ii(vtx[1]-'A', 0));
			AdjList[vtx[1]-'A'].push_back(ii(vtx[0]-'A', 0));
		}
		
		int numCC = 0;
		
		for (int i = 0; i < N; i++)
		{
			if (dfs_num[i] == 0)
			{
				numCC++;
				dfs(i);
			}
		}
		
		printf("%d\n", numCC);
		if (n)
			printf("\n");
	}
	return 0;
}
