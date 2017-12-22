#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

#define MAXN 323456

int main()
{
	int seq[MAXN], L[MAXN], lis = 0;
	char s[MAXN];

	scanf("%s", s);
	int len = strlen(s);
	for (int i = 0; i < len; i++)
		seq[i] = (int) s[i];

	for (int i = 0; i < len; i++)
	{
		int pos = upper_bound(L, L + lis, seq[i]) - L;
		L[pos] = seq[i];
		
		if (pos + 1 > lis)
			lis = pos + 1;
	}

	printf("%d\n", lis);
	return 0;
}
