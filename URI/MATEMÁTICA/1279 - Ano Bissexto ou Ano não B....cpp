// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Ano Bissexto ou Ano não B...
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1279

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int c = 1;
	string x;

	while(cin >> x)
	{
		if (c++ > 1)
			printf("\n");
		int len = (int) x.size();
		
		int sumThree = 0, sumOdd = 0, sumEven = 0;

		for (int i = 0; i < len; i++)
		{
			if (i&1)
				sumOdd += (x[i] - '0');
			else
				sumEven += (x[i] - '0');
			sumThree += (x[i] - '0');
		}

		bool divThree = sumThree % 3 ? false : true;
		bool divFour = ((x[len-2] - '0')*10 + (x[len-1] - '0')) % 4 ? false : true;
		bool divFive = ((x[len-1] - '0') == 0 or (x[len-1] - '0') == 5) ? true : false;
		bool divEleven = (abs(sumOdd - sumEven)) % 11 ? false : true;
		bool divHundred = (((x[len-1] - '0') == 0) and (x[len-2] - '0') == 0) ? true : false;
		bool divFourHundred = ((x[len-4] - '0')*1000 + (x[len-3] - '0')*100 + (x[len-2] - '0')*10 + (x[len-1] - '0')) % 400 ? false : true;
		
		bool leap = (divFour and !divHundred) or divFourHundred;
		bool huluculu = (divThree and divFive);
		bool bulukulu = (leap and divFive and divEleven);
		
		if (leap)
			printf("This is leap year.\n");
		if (huluculu)
			printf("This is huluculu festival year.\n");
		if (bulukulu)
			printf("This is bulukulu festival year.\n");
		if (!leap and !huluculu and !bulukulu)
			printf("This is an ordinary year.\n");
	}

	return 0;
}
