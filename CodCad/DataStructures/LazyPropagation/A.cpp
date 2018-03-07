#include <bits/stdc++.h>

using namespace std;

class SegmentTree 
{
    private:
        vector<int> A, st, lazy;
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
                int p1 = st[left(p)], p2 = st[right(p)];
                st[p] = p1 + p2;
            }
        }
        
        void check(int p, int L, int R)
        {
            if (lazy[p])
            {
                st[p] = lazy[p]*(R - L + 1);

                if (L != R)
                {
                    lazy[left(p)] = lazy[p];
                    lazy[right(p)] = lazy[p];
                }
                lazy[p] = 0;
            }
        }   

        int rsq(int p, int L, int R, int i, int j)
        {
            check(p, L, R);
            if (L >= i && R <= j)
                return st[p];
            if (i > R or j < L)
                return 0;
            
            int p1 = rsq(left(p), L, (L + R) / 2, i, j);
            int p2 = rsq(right(p), (L + R) / 2 + 1, R, i, j);
            
            return (p1 + p2);
        }

        int update(int p, int L, int R, int i, int j, int k)
        {
            check(p, L, R);
            
            if (i > R or j < L)
                return st[p];
            if (L >= i && R <= j)
            {
                st[p] = k * (R - L + 1);

                if (L != R)
                {
                    lazy[left(p)] = k;
                    lazy[right(p)] = k;
                }
                return st[p];
            }

            int p1 = update(left(p), L, (L + R) / 2, i, j, k);
            int p2 = update(right(p), (L + R) / 2 + 1, R, i, j, k);
            return st[p] = (p1 + p2);
        }

    public:
        SegmentTree(const vector<int> &_A)
        {
            A = _A;
            n = (int) A.size();
            st.assign(4 * n, 0);
            lazy.assign(4 * n, 0);
            build(1, 0, n - 1);
        }
        
        int rsq(int i, int j)
        {
            return rsq(1, 0, n - 1, i, j);
        }

        int update(int i, int j, int k)
        {
            return update(1, 0, n - 1, i, j, k);
        }

};

int main()
{

    int n, q, v[112345];
    scanf("%d %d", &n, &q);
    
    for (int i = 0; i < n; i++)
        scanf("%d", v + i);
    
    vector<int> a(v, v + n);
    SegmentTree st(a);

    for (int i = 0, op; i < q; i++)
    {
        scanf("%d", &op);
        
        if (op == 1)
        {
            int a, b, k;
            scanf("%d %d %d", &a, &b, &k);
            st.update(a-1, b-1, k);
        }
        else
        {
            int a, b;
            scanf("%d %d", &a, &b);
            printf("%d\n", st.rsq(a-1, b-1));
        }
    }

    //cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
