#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, num[100000];
	cin >> n;
	
	for (int i = 0; i < n; i++)
		cin >> num[i];
	
	sort(num, num + n);
	for (int i = 0; i < n; i++)
		cout << num[i] << " ";
	
	cout << "\n";
	return 0;
}
