#include <iostream>
#include <algorithm>
using namespace std;

typedef struct 
{
	int ini, fim;
}atend;

bool cmp (atend a, atend b)
{
	return a.fim < b.fim;
}

int main()
{
	int n, ans = 0, act = 0;
	atend cons[10100];
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> cons[i].ini >> cons[i].fim;
	
	sort(cons, cons+n, cmp);
	
	for (int i = 0; i < n; i++)
	{
		if (cons[i].ini >= act)
		{
			ans++;
			act = cons[i].fim;
		}
	}
	
	cout << ans << "\n";
	return 0;
} 
