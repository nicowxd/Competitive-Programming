#include <bits/stdc++.h>

using namespace std;

bool isVowel(char x)
{
	char vowels[7] = {"aeiouy"};
	for (int i = 0; i < 6; i++)
	{
		if (x == vowels[i])
			return true;
	}
	return false;
}

int main()
{
	char word[110];
	scanf("%s", word);
	int tam = strlen(word);
	for (int i = 0; i < tam; i++)
	{
		if (!isVowel(tolower(word[i])))
			printf(".%c", tolower(word[i]));
	}
	printf("\n");
	return 0;
}	
