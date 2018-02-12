#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;

char v[6] = {'a', 'e', 'i', 'o', 'u'};

bool isvowel (char ch)
{
	for (int i = 0; i < 5; i++)
		if (ch == v[i])
			return true;
	return false;
}

int main()
{

	int t, q;
	char s[MAXN];
	scanf("%d", &t);

	for (int j = 1; j <= t; j++)
	{
		scanf(" %s", s);
		scanf("%d", &q);
		
		int vo = 0, co = 0, vowel[MAXN], cons[MAXN];
		map<int, int> m;

		for (int i = 0; s[i]; i++)
		{
			if (isvowel(s[i]))
			{
				vowel[vo] = i;
				m[i] = vo;
				vo++;
			}
			else
			{
				cons[co] = i;
				m[i] = co;
				co++;
			}
		}

		printf("Caso #%d:\n", j);

		int op, qt, opVo = 0, opCo = 0;
		for (int i = 0; i < q; i++)
		{
			scanf("%d", &op);
			
			if (op == 0)
			{
				scanf("%d", &qt);
				opVo += qt;
				
			}
			else if (op == 1)
			{
				scanf("%d", &qt);
				opCo += qt;
			}
			else
			{
				int aux[MAXN];
				for (int k = 0; k < vo; k++)
					aux[(k + opVo) % vo] = vowel[k];
				for (int k = 0; k < vo; k++)
					vowel[k] = aux[k];
				for (int k = 0; k < co; k++)
					aux[(k + opCo) % co] = cons[k];
				for (int k = 0; k < co; k++)
					cons[k] = aux[k];
				for (int i = 0; s[i]; i++)
				{
					if (isvowel(s[i]))
						cout << s[vowel[m[i]]];
					else
						cout << s[cons[m[i]]];
				}
				opVo = 0;
				opCo = 0;
				printf("\n");
			}
		}
	}


	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
