// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Adivinha
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1547

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{       
	int n, qt, s, val, men;
	scanf("%d", &n);
	while(n--)
	{
	  scanf("%d %d", &qt, &s);
	  men = 10000000;
	  int pos;
	  for (int i = 1; i <= qt; i++)
	  {
	    scanf("%d", &val);
	    if (abs(s-val) < men)
	    {
	      men = abs(s-val);
	      pos = i;
	    }
	  }
	  printf("%d\n", pos);
	}
	return 0;
}
