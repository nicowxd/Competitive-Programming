#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	double m;
	while(scanf("%lf", &m) != EOF)
	{	
		int est;
		if (m >= 0.0 and m < 90.0)
		{
			puts("Bom Dia!!");
			est = 1;
		}
		else if (m >= 90.0 and m < 180.0)
		{
			puts("Boa Tarde!!");
			est = 2;
			m -= 90;
		}
		else if (m >= 180 and m < 270.0)
		{
			puts("Boa Noite!!");
			est = 3;
			m -= 180;
		}
		else
		{
			puts("De Madrugada!!");
			est = 4;
			m -= 270;
		}
		
		int secs = (m * 21600) / 90;
		int hours = secs / 3600;
		secs -= (hours*3600);
		int minutes = secs / 60;
		secs -= (minutes*60);
		
		if (est == 1)
			printf("%02d:%02d:%02d\n", 6 + hours, minutes, secs);
		else if (est == 2)
			printf("%d:%02d:%02d\n", 12 + hours, minutes, secs);
		else if (est == 3)
			printf("%d:%02d:%02d\n", 18 + hours, minutes, secs);	
		else
			printf("%02d:%02d:%02d\n", 0 + hours, minutes, secs);
	}
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
