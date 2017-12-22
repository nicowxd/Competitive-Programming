#include <iostream>
#include <set>

using namespace std;

int main()
{
	int a, b, x, y;
	set<int> al, be;
	cin >> a >> b;
	
	for (int i = 0; i < a; i++)
		cin >> x, al.insert(x);
	
	for (int i = 0; i < b; i++)
		cin >> y, be.insert(y);
	
	int ans1 = 0, ans2 = 0;
	
	set<int>::iterator it;
	for (it = al.begin(); it != al.end(); it++)
	{
		if (be.find(*it) == be.end())
			ans1++;
	}
	
	for (it = be.begin(); it != be.end(); it++)
	{
		if (al.find(*it) == al.end())
			ans2++;
	}
	
	cout << min(ans1, ans2) << "\n";
	return 0;
}	
