#include <bits/stdc++.h>

using namespace std;

string solve(int x)
{
	string s;
	while(x > 0)
	{
		s = char (x%10+48)+s;
		x/=10;
	}
	return s;
}
	

int main()
{

	string numbers = "";
	for (int i = 1; i <= 1000; i++)
	{
		numbers+= solve(i);
	}
	
	int n;
	scanf("%d", &n);
	cout << numbers[n-1] << endl;

	return 0;
}
