// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Matriz Quadrada II
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1478

#include <bits/stdc++.h>

using namespace std;

int n;

int main () {
    while (scanf("%d", &n) != EOF && n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%3d", abs(j-i)+1);
                if (j != n-1) printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
}
