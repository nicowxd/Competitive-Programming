#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t, caso = 1;
    string nm, sl, tl;

    scanf("%d%*c", &t);

    while(t--)
    {
        cin >> nm >> sl >> tl;  
        
        int ans = 0, lens = (int) sl.size(), lent = (int) tl.size();
        for (int i = (int) nm.size()-1, k = 0; i >= 0; i--, k++)
        {
            int sum = 0;
            for (int j = 0; j < lens; j++)
            {
                if (nm[i] == sl[j])
                    sum += j;
            }

            for (int j = 0; j < k; j++)
                sum *= lens;
            
            ans += sum;
        }

        string resp = "";
        
        while(ans)
        {
            int mod = ans % lent;
            resp += tl[mod];
            ans /= lent;
        }
        reverse(resp.begin(), resp.end());
        
        printf("Case #%d: %s\n", caso++, resp.c_str());
    }

    return 0;
}
