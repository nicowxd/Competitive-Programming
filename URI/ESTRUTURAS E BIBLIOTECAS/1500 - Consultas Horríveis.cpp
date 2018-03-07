#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

class SegmentTree
{
    private:
        vector<ll> A, st, lazy;
        int n;

        int left(int p)
        {
            return (p << 1);
        }

        int right(int p)
        {
            return (p << 1) + 1;
        }

        void build(int p, int L, int R)
        {
            if (L == R)
                st[p] = A[L];
            else
            {
                build(left(p), L, (L + R) / 2);
                build(right(p), (L + R) / 2 + 1, R);

                ll p1 = st[left(p)], p2 = st[right(p)];
                st[p] = (p1 + p2);
            }
        }
        
        void check(int p, int L, int R)
        {
            if (lazy[p])
            {
                st[p] += lazy[p]*(R - L + 1);

                if (L != R)
                {
                    lazy[left(p)] += lazy[p];
                    lazy[right(p)] += lazy[p];
                }
                lazy[p] = 0LL;
            }
        }

        ll rsq(int p, int L, int R, int i, int j)
        {
            check(p, L, R);

            if (L > j or R < i)
                return 0LL;
            if (L >= i && R <= j)
                return st[p];

            ll p1 = rsq(left(p), L, (L + R) / 2, i, j);
            ll p2 = rsq(right(p), (L + R) / 2 + 1, R, i, j);
            
            return (p1 + p2);
        }

        ll update(int p, int L, int R, int i, int j, ll k)
        {
            check(p, L, R);

            if (L > j or R < i)
                return st[p];
            if (L >= i && R <= j)
            {
                st[p] += k * (R - L + 1);

                if (L != R)
                {
                    lazy[left(p)] += k;
                    lazy[right(p)] += k;
                }
                return st[p];
            }

            ll p1 = update(left(p), L, (L + R) / 2, i, j, k);
            ll p2 = update(right(p), (L + R) / 2 + 1, R, i, j, k);
            return st[p] = (p1 + p2);
        }

    public:
        SegmentTree(const vector<ll> &_A)
        {
            A = _A;
            n = (int) A.size();
            st.assign(4 * n, 0LL);
            lazy.assign(4 * n, 0LL);
            build(1, 0, n - 1);
        }

        ll rsq(int i, int j)
        {
            return rsq(1, 0, n - 1, i, j);
        }
        
        ll update(int i, int j, ll k)
        {
            return update(1, 0, n - 1, i, j, k);
        }
};

int main()
{
    
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n, q;
        scanf("%d %d", &n, &q);
        
        vector<ll> v(n);
        SegmentTree st(v);

        for (int i = 0, op; i < q; i++)
        {
            scanf("%d", &op);

            if (op == 0)
            {
                int p, q;
                ll v;
                scanf("%d %d %lld", &p, &q, &v);
                st.update(p-1, q-1, v);
            }
            else
            {
                int p, q;
                scanf("%d %d", &p, &q);
                printf("%lld\n", st.rsq(p-1, q-1));
            }
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
