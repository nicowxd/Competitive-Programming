#include <iostream>
#include <set>

using namespace std;

int main()
{
	int n, x;
	set<int> alunos;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		alunos.insert(x);
	}
	
	cout << (int) alunos.size() << "\n";
	return 0;
}
