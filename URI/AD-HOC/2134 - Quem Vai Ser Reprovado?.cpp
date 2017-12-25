#include <bits/stdc++.h>

using namespace std;

struct alunos {
	
	string nome;
	int nota;
};

bool cmp(alunos a, alunos b)
{
	if (a.nota != b.nota)
		return a.nota < b.nota;
	return a.nome > b.nome;
}

int main()
{

	int n, c = 1, x;
	string s;
	while(scanf("%d", &n) != EOF)
	{
		alunos al[200];
		for (int i = 0; i < n; i++)
		{
			cin >> s >> x;
			al[i].nome = s;
			al[i].nota = x;
		}

		sort(al, al + n, cmp);
		
		printf("Instancia %d\n", c++);
		printf("%s\n\n", al[0].nome.c_str());
	}
	
	return 0;
}
