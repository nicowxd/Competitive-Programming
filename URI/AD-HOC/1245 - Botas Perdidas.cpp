// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Botas Perdidas
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1245

#include <iostream>
#include <cstdio>
#include <map>
#include <cstring>

#define MAX 31

using namespace std;

int D[MAX], E[MAX];

int main(){
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    int n;
    while (scanf("%d\n", &n) != -1){
	for (int i = 0; i < MAX; ++i) D[i] = E[i] = 0;
	for (int i = 0; i < n; ++i){
	    int m;
	    char e;
	    scanf("%d %c\n", &m, &e);
	    if (e == 'D') ++D[m-30];
	    else ++E[m-30];
	}

	int pairs = 0;
	for (int i = 0; i < MAX; ++i){
	    pairs += min(E[i], D[i]);
	}
	printf("%d\n", pairs);
    }
    return 0;
}	
	
	
	
