// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Bolhas e Baldes
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1088

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


	int n, v[100010];
	
	while(scanf("%d", &n), n)
	{
		
		int m = 0, inv = 0;

		for (int i = 0; i < n; i++)
		{
			scanf("%d", v + i);
			m = max(m, v[i]);
		}
		
		FenwickTree ft(m);
		
		for (int i = 0; i < n; i++)
		{
			inv += i - ft.rsq(v[i]);
			ft.adjust(v[i], 1);
		}
		
		if (inv&1)
			puts("Marcelo");
		else
			puts("Carlos");
	}
	
	return 0;
}
