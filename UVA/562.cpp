#include <bits/stdc++.h>

using namespace std;

int n, m, v[101], mem[60001][101];

int dp(int amount, int i)
{
  if (mem[amount][i] != -1)
    return mem[amount][i];

  if (i == m)
  {
    mem[amount][i] = abs(n - 2*amount);
    mem[n - amount][i] = mem[amount][i];

    return mem[amount][i];
  }
  
  int pega = dp(amount - v[i], i + 1);
  int npega = dp(amount, i + 1);

  mem[amount][i] = min (pega, npega);
  mem[n - amount][i] = mem[amount][i];

  return mem[amount][i];
}

int main (void)
{
  int k;

  scanf ("%d", &k);

  while (k--)
  {
    memset (mem, -1, sizeof(mem));
    
    scanf ("%d", &m);
    n = 0;

    for (int i = 0; i < m; i++)
    {
      scanf ("%d", v + i);

      n += v[i];
    }

    printf ("%d\n", dp(n, 0));

  }

  return 0;
}

