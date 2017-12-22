// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Pokémon!
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1836

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{                                   
	int qty,hp,at,df,sp,lvl,bs,iv,ev;
	char nome[50];
	scanf("%d", &qty);
	for (int i = 0; i < qty; i++)
	{
	scanf("%s %d",nome, &lvl);
	scanf("%d %d %d", &bs,&iv,&ev);
	hp = ((iv + bs + sqrt(ev)/8 + 50)*lvl)/50 + 10;
	scanf("%d %d %d", &bs,&iv,&ev);
	at = ((iv + bs + sqrt(ev)/8)*lvl)/50 + 5;
	scanf("%d %d %d", &bs,&iv,&ev);
	df = ((iv + bs + sqrt(ev)/8)*lvl)/50 + 5;
	scanf("%d %d %d", &bs,&iv,&ev);
	sp = ((iv + bs + sqrt(ev)/8)*lvl)/50 + 5; 
	printf("Caso #%d: %s nivel %d\n", i+1, nome, lvl);
	printf("HP: %d\n", hp);     
	printf("AT: %d\n", at);
	printf("DF: %d\n", df);     
	printf("SP: %d\n", sp);
	}
	return 0;
}
