#include <bits/stdc++.h>

using namespace std;

int main()
{

    string d, l, p;
    
    map<string, int> mp;
    mp["papel"] = 0;
    mp["pedra"] = 1;
    mp["tesoura"] = 2;

    while(cin >> d >> l >> p)
    {
        if (l == p and l != d)
        {
            if ((mp[d] + 1) % 3 == mp[p])
                puts("Os atributos dos monstros vao ser inteligencia, sabedoria...");
            else
                puts("Putz vei, o Leo ta demorando muito pra jogar...");
        }
        else if (d == p and l != d)
        {
            if ((mp[l] + 1) % 3 == mp[d])
                puts("Iron Maiden's gonna get you, no matter how far!");
            else
                puts("Putz vei, o Leo ta demorando muito pra jogar...");
        }
        else if (d == l and d != p)
        {
            if ((mp[p] + 1) % 3 == mp[d])
                puts("Urano perdeu algo muito precioso...");
            else
                puts("Putz vei, o Leo ta demorando muito pra jogar...");
        }
        else
            puts("Putz vei, o Leo ta demorando muito pra jogar...");
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
