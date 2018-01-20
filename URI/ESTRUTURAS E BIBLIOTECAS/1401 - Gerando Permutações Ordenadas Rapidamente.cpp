#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	char s[15];
	scanf("%d", &n);

	while(n--)
	{
		scanf(" %s", s);
		
		int len = strlen(s);

		sort(s, s + len);

		do {
			printf("%s\n", s);
		} while(next_permutation(s, s + len));
	
		printf("\n");
	}


	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
