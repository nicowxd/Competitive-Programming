#include <bits/stdc++.h>

using namespace std;

int main()
{
	string tel;
	int decode[26] = {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
	while(cin >> tel)
	{
		for (int i = 0; i < tel.size(); i++)
		{
			if (tel[i] >= 'A' && tel[i] <= 'Z')
				cout << decode[tel[i]-'A'];
			else if (tel[i] == '-')
				cout << '-';
			else
				cout << tel[i];
		}
		printf("\n");
	}
	return 0;
}
				
