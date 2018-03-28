#include <bits/stdc++.h>

using namespace std;

struct Node 
{
    int maxPrefixSum, maxSuffixSum, totalSum, maxSubSum;
    int qtyPrefixSum, qtySuffixSum, qtySubSum, qtyTotal;
};

class SegmentTree 
{
    private:
        vector<Node> st;
        vector<int> A;
        int n;
    
        int left(int p)
        {
            return (p << 1);
        }

        int right(int p)
        {
            return (p << 1) + 1;
        }
        
        Node merge(Node a, Node b)
        {
            Node ans;

            ans.totalSum = a.totalSum + b.totalSum;
            ans.qtyTotal = a.qtyTotal + b.qtyTotal;

            if (a.maxPrefixSum > a.totalSum + b.maxPrefixSum)
            {
                ans.maxPrefixSum = a.maxPrefixSum;
                ans.qtyPrefixSum = a.qtyPrefixSum;
            }
            else
            {
                ans.maxPrefixSum = a.totalSum + b.maxPrefixSum;
                ans.qtyPrefixSum = a.qtyTotal + b.qtyPrefixSum;
            }

            if (b.maxSuffixSum > b.totalSum + a.maxSuffixSum)
            {
                ans.maxSuffixSum = b.maxSuffixSum;
                ans.qtySuffixSum = b.qtySuffixSum;
            }
            else
            {
                ans.maxSuffixSum = b.totalSum + a.maxSuffixSum;
                ans.qtySuffixSum = b.qtyTotal + a.qtySuffixSum;
            }

            if (a.maxSubSum > b.maxSubSum and a.maxSubSum > a.maxSuffixSum + b.maxPrefixSum)
            {
                ans.maxSubSum = a.maxSubSum;
                ans.qtySubSum = a.qtySubSum;
            }
            else if (b.maxSubSum > a.maxSubSum and b.maxSubSum > a.maxSuffixSum + b.maxPrefixSum)
            {
                ans.maxSubSum = b.maxSubSum;
                ans.qtySubSum = b.qtySubSum;
            }
            else
            {
                ans.maxSubSum = (a.maxSuffixSum + b.maxPrefixSum);
                ans.qtySubSum = (a.qtySuffixSum + b.qtyPrefixSum);
            }
            return ans;
        }

        void build(int p, int L, int R)
        {
            if (L == R)
            {
                st[p].maxPrefixSum = A[L];
                st[p].maxSuffixSum = A[L];
                st[p].totalSum = A[L];
                st[p].maxSubSum = A[L];
                st[p].qtyPrefixSum = 1;
                st[p].qtySuffixSum = 1;
                st[p].qtySubSum = 1;
                st[p].qtyTotal = 1;
            }
            else
            {
                build(left(p), L, (L + R) / 2);
                build(right(p), (L + R) / 2 + 1, R);
                Node a = st[left(p)], b = st[right(p)];
                st[p] = merge(a, b);
            }
        }
        
        Node query(int p, int L, int R, int i, int j)
        {
            if (L >= i and R <= j)
                return st[p];
            if (L > j or R < i)
            {
                Node ans;
                ans.maxPrefixSum = -1000000;
                ans.maxSuffixSum = -1000000;
                ans.totalSum = 0;
                ans.maxSubSum = -1000000;
                ans.qtyPrefixSum = 0;
                ans.qtySuffixSum = 0;
                ans.qtySubSum = 0;
                ans.qtyTotal = 0;
                return ans;
            }

            Node a = query(left(p), L, (L + R) / 2, i, j);
            Node b = query(right(p), (L + R) / 2 + 1, R, i, j);
            return merge(a, b);
        }

    public:
        SegmentTree(const vector<int>& _A)
        {
            A = _A;
            n = (int) A.size();
            st.resize(4 * n);
            build(1, 0, n - 1);
        }
        
        Node query(int i, int j)
        {
            return query(1, 0, n - 1, i-1, j-1);
        }
};


int main()
{

    int t, n, q, a, b;
    scanf("%d", &t);

    while(t--)
    {
        vector<int> v;

        scanf("%d", &n);
        
        for (int i = 0, x; i < n; i++)
        {
            scanf("%d", &x);
            v.push_back(x);
        }

        SegmentTree st(v);

        scanf("%d", &q);

        for (int i = 0; i < q; i++)
        {
            scanf("%d %d", &a, &b);
            Node ans = st.query(a, b);
            printf("%d %d\n", ans.maxSubSum, ans.qtySubSum);
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
