#include <bits/stdc++.h>

using namespace std;

int num[5];

bool possible(int pos, int sum)
{
	if (pos == 5)
		return (sum == 23);
	int x = num[pos];
	return (possible(pos+1, sum + x) or possible(pos+1, sum - x) or possible(pos+1, sum * x));
}

int main()
{
	while(scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]))
	{
		if (num[0] == 0 and num[1] == 0 and num[2] == 0 and num[3] == 0 and num[4] == 0)
			break;
		
		sort(num, num + 5);
		bool sol = false;
		do {
			sol = possible(1, num[0]);
			if (sol)
				break;
		} while(next_permutation(num, num+5));
		
		if (sol)
			puts("Possible");
		else
			puts("Impossible");
	}

	return 0;
}
