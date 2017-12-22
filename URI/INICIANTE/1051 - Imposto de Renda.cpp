// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Imposto de Renda
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1051

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double imp,conta;
    scanf("%lf", &imp);
    if (imp >= 0 && imp <=2000)
    {
        printf("Isento\n");
    }
    if (imp > 2000 && imp <= 3000)
    {
        conta = imp-2000;
        conta = conta*0.08;
        printf("R$ %.2f\n", conta);
    }
    if (imp > 3000 && imp <= 4500)
    {
        conta = (imp-3000)*0.18 + 1000*0.08;
        printf("R$ %.2f\n", conta);
    }
    if (imp > 4500)
    {
        conta = (imp-4500)*0.28 + 1500*0.18 + 1000*0.08;
        printf("R$ %.2f\n", conta);
    }
    return 0;
}

