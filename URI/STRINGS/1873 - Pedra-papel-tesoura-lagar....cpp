// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Pedra-papel-tesoura-lagar...
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1873

#include <iostream>
#include <cstdio>
#include <cstring>
 
using namespace std;
 
int main()
{
    int x;
    char sheldon[30], raj[30];
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
    scanf("%s %s", raj, sheldon);
    if (strcmp(sheldon, "papel") == 0)
    {
    if (strcmp(raj, "pedra") == 0)
    {
    printf("sheldon\n");
    }
    if (strcmp(raj, "papel") == 0)
    {
    printf("empate\n");
    }
    if (strcmp(raj, "tesoura") == 0)
    {
    printf("rajesh\n");
    }
    if (strcmp(raj, "lagarto") == 0)
    {
    printf("rajesh\n");
    }
    if (strcmp(raj, "spock") == 0)
    {
    printf("sheldon\n");
    }
    }
    if (strcmp(sheldon, "pedra") == 0)
    {
    if (strcmp(raj, "pedra") == 0)
    {
    printf("empate\n");
    }
    if (strcmp(raj, "papel") == 0)
    {
    printf("rajesh\n");
    }
    if (strcmp(raj, "tesoura") == 0)
    {
    printf("sheldon\n");
    }
    if (strcmp(raj, "lagarto") == 0)
    {
    printf("sheldon\n");
    }
    if (strcmp(raj, "spock") == 0)
    {
    printf("rajesh\n");
    }
    }
    if (strcmp(sheldon, "tesoura") == 0)
    {
    if (strcmp(raj, "pedra") == 0)
    {
    printf("rajesh\n");
    }
    if (strcmp(raj, "papel") == 0)
    {
    printf("sheldon\n");
    }
    if (strcmp(raj, "tesoura") == 0)
    {
    printf("empate\n");
    }
    if (strcmp(raj, "lagarto") == 0)
    {
    printf("sheldon\n");
    }
    if (strcmp(raj, "spock") == 0)
    {
    printf("rajesh\n");
    }
    }
    if (strcmp(sheldon, "lagarto") == 0)
    {
    if (strcmp(raj, "pedra") == 0)
    {
    printf("rajesh\n");
    }
    if (strcmp(raj, "papel") == 0)
    {
    printf("sheldon\n");
    }
    if (strcmp(raj, "tesoura") == 0)
    {
    printf("rajesh\n");
    }
    if (strcmp(raj, "lagarto") == 0)
    {
    printf("empate\n");
    }
    if (strcmp(raj, "spock") == 0)
    {
    printf("sheldon\n");
    }
    }
    if (strcmp(sheldon, "spock") == 0)
    {
    if (strcmp(raj, "pedra") == 0)
    {
    printf("sheldon\n");
    }
    if (strcmp(raj, "papel") == 0)
    {
    printf("rajesh\n");
    }
    if (strcmp(raj, "tesoura") == 0)
    {
    printf("sheldon\n");
    }
    if (strcmp(raj, "lagarto") == 0)
    {
    printf("rajesh\n");
    }
    if (strcmp(raj, "spock") == 0)
    {
    printf("empate\n");
    }
    }
    }
    return 0;
}   
