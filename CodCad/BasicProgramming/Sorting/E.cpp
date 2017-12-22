#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, m, acc, val, vet1[110], vet2[110];
	cin >> n >> m;
	
	for (int i = 0; i < n; i++)
	{
		acc = 0;
		for (int j = 0; j < m; j++)
		{
			cin >> val;
			acc = acc + val;
		}
		vet1[i] = acc;
		vet2[i] = acc;
	}
	
	sort(vet1, vet1 + n);
	int ans1, ans2, ans3;
	for (int i = 0; i < n; i++)
	{
		if (vet2[i] == vet1[0])
			ans1 = i + 1;
		if (vet2[i] == vet1[1])
			ans2 = i + 1;
		if (vet2[i] == vet1[2])
			ans3 = i + 1;
	}
	cout << ans1 << "\n" << ans2 << "\n" << ans3 << "\n";
	return 0;
}
