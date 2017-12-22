// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Lista de Chamada
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2381

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int n, k;
    scanf("%d %d", &n, &k);
    
    vector<string> v;
    string al;
    
    for (int i = 0; i < n; i++)
    {
        cin >> al;
        v.push_back(al);
    }
 
    sort(v.begin(), v.end());
    
    printf("%s\n", v[k-1].c_str());
    return 0;
}
