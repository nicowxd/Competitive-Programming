#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n;
	string ph;
	stack<char> cad;
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		while(!cad.empty())
			cad.pop();

		bool ok = true;
		cin >> ph;
		
		if (ph.empty())
		{
			printf("S\n");
			continue;
		}
		else
		{
			for (int j = 0; j < ph.size(); j++)
			{
				if (ph[j] == '{' or ph[j] == '(' or ph[j] == '[')
					cad.push(ph[j]);
				else if (ph[j] == '}')
				{
					if (cad.empty())
						ok = false;
					else if (cad.top() != '{')
						ok = false;
					else
						cad.pop();
				}
				else if (ph[j] == ')')
				{
					if (cad.empty())
						ok = false;
					else if (cad.top() != '(')
						ok = false;
					else
						cad.pop();
				}
				else if (ph[j] == ']')
				{
					if (cad.empty())
						ok = false;
					else if (cad.top() != '[')
						ok = false;
					else
						cad.pop();
				}
			}
			if (!cad.empty())
				ok = false;
			
			if (ok)
				printf("S\n");
			else
				printf("N\n");
		  }
	  }
						
	return 0;
}
