#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    string a, b;
    scanf("%d", &n);

    while(n--)
    {
        cin >> a >> b;
    
        cout << a << endl;
        cout << b << endl;

        for (int i = 0; i < (int) a.size(); i++)
        {
            if (a[i] == b[i])
                printf(".");
            else
                printf("*");
        }

        printf("\n\n");
    }

    return 0;
}
