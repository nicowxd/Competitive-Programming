// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Infixa para Posfixa
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1077

#include <iostream>
#include <cstdio>
#include <stack>
#include <map>
#include <cctype>

using namespace std;

map<char, int> a;

int main()
{
	a['('] = -1; 
	a['+'] = 0;
	a['-'] = 0;
	a['*'] = 1;
	a['/'] = 1;
	a['^'] = 2;
	int n, tam;
	string expr,postfix;
	stack<char> opr;
	scanf("%d", &n);
	cin.get();

	while(n--)
	{
	getline(cin, expr);
	tam = (int) expr.length();
	postfix = "";

	for(int i = 0; i < tam; i++)
	{
	if (isalnum(expr[i]))
	{
	postfix+=expr[i];
	}
	else if (expr[i] == '(')
	{
	opr.push(expr[i]);
	}
	else if (expr[i] == ')' && !opr.empty())
	{
		while(opr.top() != '(')
		{
		postfix+=opr.top();
		opr.pop();
		}
		opr.pop();
	}
	else
	{
		while (!opr.empty() && a[opr.top()] >= a[expr[i]] && opr.top() != '(')
		{
		postfix+=opr.top();
		opr.pop();
		}                 
		opr.push(expr[i]);
		if (opr.empty())
			opr.push(expr[i]);
	}
	}
	while(!opr.empty())
	{
	postfix+=opr.top();
	opr.pop();
	}
	cout << postfix << endl;
	}
	return 0;
}
	
	
	 
