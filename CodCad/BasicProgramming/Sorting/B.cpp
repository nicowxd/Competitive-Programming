#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, ans[100000], all[100000], dolls[100000];
	cin >> n;
	
	for (int i = 0; i < n; i++)
		cin >> dolls[i], ans[i] = dolls[i];
	
	sort(ans, ans + n);
	
	int cnt = 0, k = 0;
	for (int i = 0; i < n; i++)
	{
		if (dolls[i] != ans[i])
		{
			cnt++;
			all[k] = ans[i];
			k++;
		}
	}

	sort(all, all+cnt);
	if (cnt == 0)
		cout << cnt;
	else
		cout << cnt << "\n";

	for (int i = 0; i < cnt; i++)
		cout << all[i] << " ";
	
	cout << "\n";
	return 0;
}	
