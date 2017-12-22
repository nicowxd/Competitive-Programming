// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Grid de Largada
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1228

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int sort(vector<int>& v)
{
      bool flag = true;
	int count  = 0;
	
	while (flag)
	{
		flag = false;
		for (int i = 0; i < v.size() - 1; i++)
		{
			if (v[i] > v[i+1])
			{
				flag = true;
				count++;
				swap (v[i], v[i+1]);
			}
		}
	}
	
	return count;
}


int main (void)
{
	map <int, int> largada;
	vector <int> chegada;
	int pos;
	int n;

	cin >> n;
	
	while (!cin.eof())
	{
		largada.clear();
		chegada.clear();
		for (int i = 0; i < n; i++)
		{
	            cin >> pos;
		   largada[pos] = i+1;
			
		}

		for (int i = 0; i < n; i++)
		{
			cin >> pos;
			chegada.push_back (largada[pos]);
		}

		cout << sort (chegada) << endl;	
	
		cin >> n;
	}

}

