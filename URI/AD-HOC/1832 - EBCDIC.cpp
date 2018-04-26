#include <bits/stdc++.h>

using namespace std;

int convert(int x)
{
    int ans = 0, power = 1;

    while(x)
    {
        ans += (x % 10) * power;
        x /= 10;
        power *= 8;
    }
    
    return ans;
}

int main()
{

    map<int, char> mp;
    mp[64] = ' ';
    for (int i = 0; i < 9; i++)
    {
        mp[129 + i] = 'a' + i;
        mp[145 + i] = 'j' + i;
        mp[193 + i] = 'A' + i;
        mp[209 + i] = 'J' + i;
    }

    for (int i = 0; i < 8; i++)
    {
        mp[162 + i] = 's' + i;
        mp[226 + i] = 'S' + i;
    }

    for (int i = 0; i < 10; i++)
        mp[240 + i] = '0' + i;

    string s;
    while(getline(cin, s))
    {
        int val;
        stringstream ss(s);
        
        while(ss >> val)
            printf("%c", mp[convert(val)]);
        printf("\n");
    }


    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
