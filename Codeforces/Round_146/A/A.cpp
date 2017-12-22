#include <bits/stdc++.h>

using namespace std;

int main()
{

	char nick[110];
	scanf("%s", nick);	
	
	int tam = strlen(nick);
	set<char> gender;

	for (int i = 0; i < tam; i++)
	{
		if (gender.find(nick[i]) == gender.end())
			gender.insert(nick[i]);
	}
	
	if (gender.size() % 2)
		printf("IGNORE HIM!\n");
	else
		printf("CHAT WITH HER!\n");
	return 0;
}
