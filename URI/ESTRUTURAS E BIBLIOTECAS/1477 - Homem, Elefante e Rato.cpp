#include <bits/stdc++.h>

using namespace std;

struct node 
{
    int v[3];
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

            for (int i = 0; i < 3; i++)
                ans.v[i] = (a.v[i] + b.v[i]);
            
            return ans;
        }

        node rotate(node a, int k)
        {
            node ans;
            
            for (int i = 0; i < 3; i++)
                ans.v[(i + k) % 3] = a.v[i];
            return ans;
        }

        void build(int p, int L, int R)
        {
            if (L == R)
            {
                st[p].v[0] = 1;
                st[p].v[1] = 0;
                st[p].v[2] = 0;
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
                st[p] = rotate(st[p], lazy[p]);

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

            if (L > j or R < i)
            {
                node aux;
                for (int i = 0; i < 3; i++)
                    aux.v[i] = 0;
                return aux;
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
            
            if (L > j or R < i)
                return st[p];
            if (L >= i && R <= j)
            {
                st[p] = rotate(st[p], k);
                
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
        
        SegmentTree(const vector<int> &_A)
        {
            A = _A;
            n = (int) A.size();
            st.resize(4 * n);
            lazy.assign(4 * n, 0);
            build(1, 0, n - 1);
        }

        node rsq(int i, int j)
        {
            return rsq(1, 0, n - 1, i, j);
        }

        node update(int i, int j)
        {
            return update(1, 0, n - 1, i, j, 1);
        }
};

int main()
{
    
    int n, m;

    while(scanf("%d %d", &n, &m) != EOF)
    {
        int a, b;
        char op;
        
        vector<int> v(n);
        SegmentTree ST(v);
        
        for (int i = 0; i < m; i++)
        {
            scanf(" %c %d %d", &op, &a, &b);
        
            if (op == 'M')
                ST.update(a-1, b-1);
            else
            {
                node ans = ST.rsq(a-1, b-1);
                printf("%d %d %d\n", ans.v[0], ans.v[1], ans.v[2]);
            }
        }
        printf("\n");
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
