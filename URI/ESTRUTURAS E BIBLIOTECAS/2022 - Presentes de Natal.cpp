#include <bits/stdc++.h>

using namespace std;

struct obj
{
    string nome;
    double val;
    int pref;
};

bool cmp (obj a, obj b)
{
    if (a.pref != b.pref)
        return a.pref > b.pref;
    if (a.val != b.val)
        return a.val < b.val;
    return a.nome < b.nome;
}

int main()
{

    int q;
    string s;
    
    while(cin >> s >> q)
    {
        int p;
        double v;
        string n;
        obj objetos[200];

        for (int i = 0; i < q; i++)
        {
            getchar();
            getline(cin, n);
            cin >> v >> p;
            objetos[i].nome = n;
            objetos[i].val = v;
            objetos[i].pref = p;
        }

        sort(objetos, objetos + q, cmp);

        printf("Lista de %s\n", s.c_str());
        for (int i = 0; i < q; i++)
            printf("%s - R$%.2lf\n", objetos[i].nome.c_str(), objetos[i].val);
        cout << endl;
    }
    
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
