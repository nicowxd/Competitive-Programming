#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    while(getline(cin, s))
    {
        stringstream ss(s);
        
        int ip[5], mask[4], cnt = 0;
        while(ss >> s)
        {
            int i = 0, val = 0;
            if (cnt == 0)
            {
                for (char x : s)
                {
                    if (x == '.' or x == '/')
                    {
                        ip[i++] = val;
                        val = 0;
                    }
                    else
                        val = val*10 + (x - '0');
                }
                ip[i] = val;
            }
            else
            {
                for (char x : s)
                {
                    if (x == '.')
                    {
                        mask[i++] = val;
                        val = 0;
                    }
                    else
                        val = val*10 + (x - '0');
                }
                mask[i] = val;
            }
            cnt++;
        }
        
        int ldones = 0;
        if (cnt == 2)
        {
            bool flag = true;
            for (int i = 0; i < 4 and flag; i++)
            {
                for (int j = 7; j >= 0 and flag; j--)
                {
                    if ((mask[i] & (1 << j)) == 0)
                        flag = false;
                    else
                        ldones++;
                }
            }
        }
        else
            ldones = ip[4];

        int sum = 0, end[4] = {0}, broad[4] = {0};
        long long qty;
        for (int j = 0; j < 4; j++)
        {
            int k1 = 0, k2 = 0;
            for (int i = 7; i >= 0; i--)
            {
                if (sum < ldones)
                {
                    k1 += (ip[j] & (1 << i));
                    k2 += (ip[j] & (1 << i));
                }
                else
                    k2 += (1 << i);
                sum++;
            }
            end[j] = k1;
            broad[j] = k2;
        }
        
        qty = (1LL << 32 - ldones);
	qty -= 2;

        printf("Endereco de rede: %d.%d.%d.%d\n", end[0], end[1], end[2], end[3]);
        printf("Endereco de broadcast: %d.%d.%d.%d\n", broad[0], broad[1], broad[2], broad[3]);
        printf("Numero de maquinas: %lld\n\n", qty);
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
