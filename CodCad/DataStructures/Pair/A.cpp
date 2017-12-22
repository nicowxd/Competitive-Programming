#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n, t, h;
	string nome;
	vector < pair<int, string> > jog;
	
	scanf("%d %d", &n, &t);
	
	for (int i = 0; i < n; i++)
	{
		cin >> nome >> h;
		jog.push_back(make_pair(h, nome));
	}
	
	sort(jog.begin(), jog.end(), greater< pair<int, string> >());
	
	vector<string> ans;
	for (int i = 0; i < t; i++)
	{
		printf("Time %d\n", i+1);
		for (int j = i; j < n; j+=t)
		{
			ans.push_back(jog[j].second);
		}
		sort(ans.begin(), ans.end());
		
		for (int j = 0; j < ans.size(); j++)
			cout << ans[j] << endl;
		printf("\n");
		ans.clear();
	}

	return 0;
}
