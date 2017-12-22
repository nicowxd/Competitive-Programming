#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
	int n, val;
	cin >> n;
	vector<int> fila;
	for (int i = 0; i < n; i++)
	{
		cin >> val;
		fila.push_back(val);
	}
	
	int m;
	cin >> m;
	vector<int> answer;
	for (int i = 0; i < m; i++)
	{
		cin >> val;
		answer.push_back(val);
	}
	
	for (int i = 0; i < n; i++)
	{
		if (find(answer.begin(), answer.end(), fila[i]) == answer.end())
			cout << fila[i] << " ";
	}
	cout << "\n";
	return 0;
}
