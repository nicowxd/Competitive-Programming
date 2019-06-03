#include <bits/stdc++.h>

using namespace std;

bool check_pal(int h, int m) {
	if (h >= 10 && h <= 23) {
		if (m >= 10 && m <= 59) 
			return ((h % 10) == m / 10) && (h / 10) == (m % 10);
		else
			return (h % 10 == 0) && ((h / 10) == m % 10);
	} else {
		if (m >= 10 && m <= 59) 
			return (h % 10 == (m / 10)) && (m % 10 == 0);
		else
			return false;
	}
}

int main()
{
	
	int h, m;
	scanf("%d:%d", &h, &m);

	while(true) {
		if (h == 23 && m == 59)
			break;
		m++;
		if (m == 60) {
			m = 0;
			h++;
		}
		if (check_pal(h, m)) {
			printf("%02d:%02d\n", h, m);
			return 0;
		}
	}
	printf("00:00\n");
	return 0;

}
