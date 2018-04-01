#include <cstdio>
#include <unordered_map>

using namespace std;

int main()
{

    int n, m, v[3];
    char a, b, op;
    unordered_map<char, int> mp;
    mp['D'] = 0;
    mp['E'] = 1;
    mp['F'] = 2;

    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < 3; i++)
        v[i] = n;

    for (int i = 0, x; i < m; i++)
    {
        scanf("%*c%c %c", &op, &a);
        if (op == 'C')
        {
            scanf("%d", &x);
            v[mp[a]] -= x;
        }
        else if (op == 'V')
        {
            scanf("%d", &x);
            v[mp[a]] += x;
        }
        else
        {
            scanf(" %c %d", &b, &x);
            v[mp[a]] += x;
            v[mp[b]] -= x;
        }
    }

    printf("%d %d %d\n", v[0], v[1], v[2]);
    
    return 0;
}
