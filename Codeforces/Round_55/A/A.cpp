#include <bits/stdc++.h>

using namespace std;

int main()
{

	char word[110];
	scanf("%s", word);
	
	int tam = strlen(word), low = 0, up = 0;
	
	for (int i = 0; i < tam; i++)
	{
		if (isupper(word[i]))
			up++;
		else
			low++;
	}
	
	if (up > low)
	{
		for (int i = 0; i < tam; i++)
			printf("%c", toupper(word[i]));
	}
	else
	{
		for (int i = 0; i < tam; i++)
			printf("%c", tolower(word[i]));
	}
	printf("\n");
	return 0;
}
