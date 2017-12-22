// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Precisa-se de Matemáticos...
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1804

#include <bits/stdc++.h>

using namespace std;

#define LSOne(S) (S & (-S))

class FenwickTree {
private:
  vector<int> ft;

public:
  FenwickTree() {}
  
  FenwickTree(int n) 
  { 
  	ft.assign(n + 1, 0); 
  }

  int rsq(int b) 
  {
  	int sum = 0; 
	for (; b; b -= LSOne(b)) 
		sum += ft[b];
    	return sum; 
  }

  int rsq(int a, int b)
  {
  	return rsq(b) - (a == 1 ? 0 : rsq(a - 1)); 
  }

  void adjust(int idx, int val) 
  { 
  	for (; idx < (int)ft.size(); idx += LSOne(idx)) 
		ft[idx] += val; 
  }
};

int main()
{

	int n, x, v[100100];
	char op;

	scanf("%d", &n);

	FenwickTree ft(n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", v+i);
		ft.adjust(i, v[i]);
	}
	
	while(scanf("%*c%c %d", &op, &x) != EOF)
	{
		if (op == 'a')
			ft.adjust(x, -v[x]);
		else
			printf("%d\n", ft.rsq(x-1));
	}
	return 0;
}
