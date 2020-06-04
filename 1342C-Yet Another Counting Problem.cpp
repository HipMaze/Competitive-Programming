#include <bits/stdc++.h>

using namespace std;

const int N = 40044;

int len;
int p[N];

void setup(int a, int b)
{
    len = a * b;
    p[0] = 0;
    for (int i = 1; i <= len; i++)
    {
        p[i] = p[i - 1];
        if ((i % a) % b != (i % b) % a)
            p[i]++;
    }
}

long long query(long long l)
{
    long long cnt = l/len;
    int rem = l % len;
    return p[len] * 1ll * cnt + p[rem];
}

long long query(long long l, long long r)
{
    return query(r) - query(l - 1);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a, b, q;
        scanf("%d %d %d",&a,&b,&q);
        setup(a, b);
        long long l, r;
        for (int j = 0; j < q; j++)
        {
            scanf("%d %d",&l,&r);
            printf("%d ",query(l,r));
        }
        printf("\n");
    }
    return 0;
}