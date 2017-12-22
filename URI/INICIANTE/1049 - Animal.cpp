// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Animal
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1049

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	char p1[100], p2[100], p3[100];
	scanf("%s", p1);
	scanf("%s", p2);
	scanf("%s", p3);
	char p4[100] = "vertebrado";
	char p5[100] = "ave"; 
	char p6[100] = "carnivoro"; 
	char p7[100] = "onivoro";
	char p8[100] = "inseto";
	char p9[100] = "hematofago";           
	if (strcmp(p1,p4)== 0)
	{
	if (strcmp(p2,p5) == 0)
	{
	if (strcmp(p3,p6)==0)
	{
	printf("aguia\n");
	}
	else
	{
	printf("pomba\n");
	}
	}
	else
	{
	if (strcmp(p3,p7)==0)
	{
	printf("homem\n");
	}
	else
	{
	printf("vaca\n");
	}
	}
	}
	else
	{
	if (strcmp(p2,p8)==0)
	{
	if (strcmp(p3,p9)==0)
	{
	printf("pulga\n");
	}
	else
	{
	printf("lagarta\n");
	}
	}
	else
	{
	if (strcmp(p3,p9)==0)
	{
	printf("sanguessuga\n");
	}
	else
	{
	printf("minhoca\n");
	}
	}
	}
	return 0;
}
