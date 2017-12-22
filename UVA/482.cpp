#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	scanf("%d", &t);
	getchar();

	while(t--)
	{
		getchar();
	
		int idx[100010], i = 1, j = 1;
		
		string buff, ans[10000];
		
		getline(cin, buff);
		
		stringstream ss;
		ss << buff;

		while(ss >> idx[i])
			i++;
		
		getline(cin, buff);
		
		ss.clear();
		ss << buff;
		
		while(ss >> ans[idx[j]])
			j++;

		for (int k = 1; k < i; k++)
			cout << ans[k] << endl;
		if (t)
			printf("\n");
	}
		


	return 0;
}
