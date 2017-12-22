// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Média 3
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1040

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	float n1,n2,n3,n4,nr,media;
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	media = (n1*2.0+n2*3.0+n3*4.0+n4*1.0)/10.0;
	printf("Media: %.1f\n", media);
	if(media>= 7.0)
	{
	printf("Aluno aprovado.\n");
	return 0;
	}
	else if(media >= 5.0 && media <= 6.9)
	{
	printf("Aluno em exame.\n");
	scanf("%f", &nr);
	printf("Nota do exame: %.1f\n", nr);
	media = (media+nr)/2.0;
	if (media>=5.0)
	{
	printf("Aluno aprovado.\n");
	printf("Media final: %.1f\n", media);
	}
	else
	{
	printf("Aluno reprovado.\n");
	printf("Media final: %.1f\n", media);
	}
	}
	else
	{
	printf("Aluno reprovado.\n");
	return 0;
	}
}


