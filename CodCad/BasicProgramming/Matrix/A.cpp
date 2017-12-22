#include <iostream>

using namespace std;

int main()
{
	int n, pri[200][200], si[200][200];
	cin >> n;
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> pri[i][j];
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> si[i][j];
			cout << pri[i][j] + si[i][j] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}
