#include <bits/stdc++.h>

using namespace std;

int main()
{

	char first[110], second[110];
	scanf("%s", first);
	scanf("%s", second);
	
	int tam = strlen(first);
	
	for (int i = 0; i < tam; i++)
	{
		if (first[i] == second[i])
			printf("0");
		else
			printf("1");
	}
	printf("\n");
	return 0;
}
