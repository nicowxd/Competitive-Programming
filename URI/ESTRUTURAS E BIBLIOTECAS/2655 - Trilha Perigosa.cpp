#include <bits/stdc++.h>

using namespace std;

struct node
{
    int t[50];
    int diff;
};

class SegmentTree
{
    private:
        vector<node> st;
        vector<int> A;

        int n, m;

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
            ans.diff = 0;

            for (int i = 0; i < m; i++)
            {
                ans.t[i] = (a.t[i] + b.t[i]);
                if (ans.t[i] >= 1)
                    ans.diff++;
            }

            return ans;
        }

        void build(int p, int L, int R, int m)
        {
            if (L == R)
            {
                for (int i = 0; i < m; i++)
                    st[p].t[i] = 0;
                st[p].t[A[L]] = 1;
                st[p].diff = 1;
            }
            else
            {
                build(left(p), L, (L + R) / 2, m);
                build(right(p), (L + R) / 2 + 1, R, m);
                node p1 = st[left(p)], p2 = st[right(p)];
                st[p] = add(p1, p2);
            }
        }
        
        node rsq(int p, int L, int R, int i, int j, int m)
        {
            if (L > j or R < i)
            {
                node aux;

                aux.diff = 0;
                for (int i = 0; i < m; i++)
                    aux.t[i] = 0;
                
                return aux;
            }
            if (L >= i && R <= j)
                return st[p];
            
            node p1 = rsq(left(p), L, (L + R) / 2, i, j, m);
            node p2 = rsq(right(p), (L + R) / 2 + 1, R, i, j, m);

            return add(p1, p2);
        }
        
        node update(int p, int L, int R, int i, int val, int m)
        {
            if (L > i or R < i)
                return st[p];
            if (L >= i && R <= i)
            {
                for (int i = 0; i < m; i++)
                    st[p].t[i] = 0;
                st[p].t[val] = 1;
                st[p].diff = 1;
                return st[p];
            }
            
            node p1 = update(left(p), L, (L + R) / 2, i, val, m);
            node p2 = update(right(p), (L + R) / 2 + 1, R, i, val, m);
            return st[p] = add(p1, p2);
        }

    public:
        SegmentTree(const vector<int> &_A, int _m)
        {
            A = _A;
            n = (int) A.size();
            m = _m;
            st.resize(4 * n);
            build(1, 0, n - 1, m);
        }

        int rsq(int i, int j)
        {
            node ans = rsq(1, 0, n - 1, i, j, m);
            return ans.diff;
        }

        node update(int i, int val)
        {
            return update(1, 0, n - 1, i, val, m);
        }
};


int main()
{

    int n, q, m;
    vector<int> v;
    scanf("%d %d %d", &n, &q, &m);

    for (int i = 0, x; i < n; i++)
    {
        scanf("%d", &x);
        v.push_back(x-1);
    }
    
    SegmentTree st(v, m);

    for (int i = 0, op, a, b; i < q; i++)
    {
        scanf("%d %d %d", &op, &a, &b);

        if (op == 1)
            printf("%d\n", st.rsq(a-1, b-1));
        else
            st.update(a-1, b-1);
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
