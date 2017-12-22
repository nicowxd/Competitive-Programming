#include <bits/stdc++.h>

using namespace std;

int main()
{

	int h, m, v[17] = {0, 70, 140, 210, 280, 350, 601, 671, 741, 811, 881, 951, 1202, 1272, 1342, 1412, 1440};
	scanf("%d:%d", &h, &m);
	
	int k = h*60 + m;
	int menor = 1e9, idx, diff;
	for (int i = 0; i < 17; i++)
	{
		diff = v[i]-k;
		if (diff >= 0 and menor > diff)
			menor = diff;
			
	}
	
	printf("%d\n", menor);
		
	return 0;
}
