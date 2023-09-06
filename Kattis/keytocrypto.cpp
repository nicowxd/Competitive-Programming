#include <bits/stdc++.h>

using namespace std;

int main()
{


    string cp, key;
    cin >> cp >> key;
    
    int len = (int) key.size();

    for (int i = 0; i < (int) cp.size(); i++)
    {
        int diff = key[i] - 'A';
        if (cp[i] - diff < 65)
            key += (cp[i] - diff) + 26;
        else
            key += cp[i] - diff;
    }
    
    for (int i = len; i <= (int) key.size(); i++)
        cout << key[i];
    cout << endl;
    return 0;
}
