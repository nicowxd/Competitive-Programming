#include <bits/stdc++.h>

using namespace std;

int main()
{


    char str[60];

    scanf("%s", str);

    int pos = 1;

    for (int i = 0; str[i]; i++)
    {
        if (str[i] == 'A' and pos == 1)
            pos = 2;
        else if (str[i] == 'A' and pos == 2)
            pos = 1;
        else if (str[i] == 'B' and pos == 2)
            pos = 3;
        else if (str[i] == 'B' and pos == 3)
            pos = 2;
        else if (str[i] == 'C' and pos == 1)
            pos = 3;
        else if (str[i] == 'C' and pos == 3)
            pos = 1;
    }

    printf("%d\n", pos);

    return 0;
}

