#include <bits/stdc++.h>

using namespace std;

int main()
{

	double s1, s2, s3, a, b, c;
	scanf("%lf %lf %lf", &s1, &s2, &s3);
	
	a = sqrt((s1*s2)/s3);
	b = sqrt((s1*s3)/s2);
	c = sqrt((s2*s3)/s1);
	
	printf("%.0lf\n", 4*(a+b+c));
	return 0;
}
