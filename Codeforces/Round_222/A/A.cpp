#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a, b, awin=0, draw=0, alose=0;
	scanf("%d %d", &a, &b);
	
	for (int i = 1; i <= 6; i++)
	{
		if (abs(a-i) < abs(b-i))
			awin++;
		else if (abs(a-i) == abs(b-i))
			draw++;
		else
			alose++;
	}
	printf("%d %d %d\n", awin, draw, alose);
	//fprintf(stderr, "time = %d ms\n", (int)clock());
	cerr << "Time = " << (int) clock() << "ms\n";	
	return 0;
}
