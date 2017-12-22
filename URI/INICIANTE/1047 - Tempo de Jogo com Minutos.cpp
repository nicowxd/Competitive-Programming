// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Tempo de Jogo com Minutos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1047

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int hi,mi,hf,mf;
	scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
	if (hi == mi && hi == hf && hf == mf)
	{
	printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	return 0;
	}
	if (mi <= mf && hi <= hf)
	{
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hf-hi, mf-mi);
	}
	if (mf < mi && hi < hf)
	{
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hf-hi-1, 60-mi+mf);
	}
	if (mi <= mf && hi > hf)
	{
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24-hi+hf, mf-mi);
	}
	if (mf < mi && hi >= hf)
	{
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24-hi-1+hf, 60-mi+mf);
	}
	return 0;
}
