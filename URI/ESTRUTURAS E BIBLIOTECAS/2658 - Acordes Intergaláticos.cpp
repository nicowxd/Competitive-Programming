#include <bits/stdc++.h>

using namespace std;

struct node
{
    int v[9];
    int maxValue;
};

class SegmentTree 
{
    private:
        vector<node> st;
        vector<int> A, lazy;
        int n;

        int left(int p)
        {
            return (p << 1);
        }

        int right(int p)
        {
            return (p << 1) + 1;
        }
        
        node add(node a, node b)
        {
            node ans;

            int mV = 0, idx;
            
            for (int i = 0; i < 9; i++)
            {
                ans.v[i] = (a.v[i] + b.v[i]);
                if (ans.v[i] >= mV)
                {
                    mV = ans.v[i];
                    idx = i;
                }
            }

            ans.maxValue = idx;
            return ans;
        }
        
        node att(node a, int k)
        {
            node ans;

            ans.maxValue = (a.maxValue + k) % 9;
            
            for (int i = 0; i < 9; i++)
                ans.v[(i + k) % 9] = a.v[i];
            
            return ans;
        }

        void build(int p, int L, int R)
        {
            if (L == R)
            {
                for (int i = 0; i < 9; i++)
                    st[p].v[i] = 0;
                st[p].v[1] = 1;
                st[p].maxValue = 1;
            }
            else
            {
                build(left(p), L, (L + R) / 2);
                build(right(p), (L + R) / 2 + 1, R);
                node p1 = st[left(p)], p2 = st[right(p)];
                st[p] = add(p1, p2);
            }
        }

        void check(int p, int L, int R)
        {
            if (lazy[p])
            {
                st[p] = att(st[p], lazy[p]);
                if (L != R)
                {
                    lazy[left(p)] += lazy[p];
                    lazy[right(p)] += lazy[p];
                }

                lazy[p] = 0;
            }
        }

        node rsq(int p, int L, int R, int i, int j)
        {
            check(p, L, R);
            
            if (R < i or L > j)
            {
                node ans;

                for (int i = 0; i < 9; i++)
                    ans.v[i] = 0;
                ans.maxValue = 0;

                return ans;
            }

            if (L >= i && R <= j)
                return st[p];

            node p1 = rsq(left(p), L, (L + R) / 2, i, j);
            node p2 = rsq(right(p), (L + R) / 2 + 1, R, i, j);

            return add(p1, p2);
        }

        node update(int p, int L, int R, int i, int j, int k)
        {
            check(p, L, R);
            
            if (R < i or L > j)
                return st[p];
            if (L >= i && R <= j)
            {
                st[p] = att(st[p], k);
                if (L != R)
                {
                    lazy[left(p)] += k;
                    lazy[right(p)] += k;
                }
                return st[p];
            }

            node p1 = update(left(p), L, (L + R) / 2, i, j, k);
            node p2 = update(right(p), (L + R) / 2 + 1, R, i, j, k);

            return st[p] = add(p1, p2);
        }

    public:
        SegmentTree(int _n)
        {
            n = _n;
            A.assign(n, 1);
            st.resize(4 * n);
            lazy.assign(4 * n, 0);
            build(1, 0, n - 1);
        }

        int rsq(int i, int j)
        {
            node ans = rsq(1, 0, n - 1, i, j);
            return ans.maxValue;
        }

        node update(int i, int j, int k)
        {
            return update(1, 0, n - 1, i, j, k);
        }
};

int main()
{

    int n, q, a, b;
    scanf("%d %d", &n, &q);

    SegmentTree st(n);

    for (int i = 0, c; i < q; i++)
    {
        scanf("%d %d", &a, &b);
        c = st.rsq(a, b);
        st.update(a, b, c);
    }
    
    for (int i = 0; i < n; i++)
        printf("%d\n", st.rsq(i, i));

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;

}
