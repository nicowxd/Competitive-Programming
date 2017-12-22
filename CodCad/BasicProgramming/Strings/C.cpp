#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, ans, tam, j;
	bool one;
	string num;
	while((cin >> n >> num) && (n != 0 && num != "0"))
	{
		tam = (int) num.size();
		one = false;
		for (int i = 0; i < tam; i++)
		{
			ans = num[i] - '0';
			if (n != ans)
			{
				if (ans == 0)
				{
					if (one)
						cout << num[i];
				}
				else
				{
					cout << num[i];
					one = true;
				}
					 
			}
		}
		if (!one)
			printf("0");
		
		printf("\n");
	}
	return 0;
}
