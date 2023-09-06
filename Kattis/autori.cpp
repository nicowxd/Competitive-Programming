#include <bits/stdc++.h>

using namespace std;

int main()
{


    char str[110], *p;
    vector<char> x;

    scanf("%s", str);
    
    for (p = strtok(str, "-"); p; p = strtok(NULL, "-"))
        x.push_back(p[0]);
    
    for (int i = 0; i < (int) x.size(); i++)
        cout << x[i];
    cout << endl;
    return 0;
}
