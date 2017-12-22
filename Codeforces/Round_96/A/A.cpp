#include <bits/stdc++.h>

using namespace std;

int main()
{


	char p[110];
	
	scanf("%s", p);

	bool flag = false;
	int tam = strlen(p);

	for (int i = 0; i < tam and !flag; i++)
	{
		if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
			flag = true;
	}

	if (flag)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
