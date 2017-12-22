// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Guildas
// Nível: 5
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1527

#include <iostream>

using namespace std;
#define MAXN 100100

int pai[MAXN], r[MAXN], s[MAXN], k[MAXN];

/*void build(int n)
{
    for (int i=0; i<n ; i++)
    {
        pai[i]=i;
        r[i]=0;
        s[i]=1;
    }
    //k =n;
}*/

int findSet(int x)
{
    if(pai[x]==x) return x;
    return pai[x] = findSet(pai[x]);
}


void join (int x, int y)
{
    x = findSet(x);
    y = findSet(y);

    if(x==y)
        return;

    if(r[x]>r[y])
    {
        pai[y] = x;
        s[x]+=s[y];
    }

    else
    {
        if(r[x]==r[y])
            r[y]++;

        pai[x] = y;
        s[y]+=s[x];
    }


    //k--

}

bool sameSet(int x, int y)
{
    if(findSet(x)==findSet(y))
        return 1;
    return 0;
}

int sizeSet(int x)
{
    return s[findSet(x)];
}

/*int NDS()
{
    return k;
}*/

int main()
{
    int n, m;

    while(cin>>n>>m, n)
    {

        for (int i=1; i<=n ; i++)
        {
            pai[i]=i;
            k[i]=0;
            cin>>s[i];
        }


        int ans = 0;
        for (int i=0; i< m; i++)
        {
            int q, a ,b;

            cin>>q>>a>>b;

            if(q==1)
                join(a, b);
            else if(q==2)
            {
              	    int x = findSet(1);
                    if(findSet(a) == x and s[findSet(a)] > s[findSet(b)])
                    	ans++;
		    if(findSet(b) == x and s[findSet(b)] > s[findSet(a)])
			ans++;
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}
