#include <cstdio>

using namespace std;

int main()
{
	double a, maior = 0.0, menor = 1e9, acc = 0.0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%lf", &a);	
		if (a > maior)
			maior = a;
		if (a < menor)
			menor = a;
		acc+= a;
	}
	printf("%.1lf\n", acc-maior-menor);
	return 0;
}
