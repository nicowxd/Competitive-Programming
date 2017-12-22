// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Loop Musical
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1089

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;

#define maxN 10005
int a[maxN], n, ans;

int main() {
    bool godown, goup;
    while (scanf("%d", &n) && n) {
        for (int i=0; i<n; i++)
            scanf("%d", &a[i]);
        godown = goup = false;
        ans = 0;
        if (a[n-1]<a[0]) goup = true;
        else godown = true;
        a[n] = a[0];
        for (int i=1; i<=n; i++)
            if (a[i-1]<a[i] && godown) {
                ans++;
                godown = false; goup = true;
            }
            else if (a[i-1]>a[i] && goup) {
                ans++;
                godown = true; goup = false;
            }
        printf("%d\n", ans);
    }
}
