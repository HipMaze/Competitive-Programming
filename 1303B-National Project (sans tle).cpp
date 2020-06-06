#include <iostream>
using namespace std;

int main()
{
    int t = 0, n = 0, g = 0, b = 0, invlim = 0, i;
    long long int d = 0;
    scanf("%d", &t);

    while (t--)
    {
        d = 0;
        scanf("%d %d %d", &n, &g, &b);
        invlim = n / 2;
        while (n > 0)
        {
            if (n > g)
            {
                n -= g;
                d += g;
            }
            else
            {
                d += n;
                break;
            }

            if (n <= 0)
            {
                break;
            }
            if (invlim==0)
            {
                d+=b;
                continue;
            }
            if (n > b && b < invlim)
            {
                n -= b;
                invlim -= b;
                d += b;
            }else if (n > b && b > invlim && invlim > 0)
            {
                n -= invlim;
                d += invlim;
                invlim = 0;
            }else if (n < b && invlim > n)
            {
                d += n;
                break;
            }else if (n < b && invlim < n && invlim > 0)
            {
                n -= invlim;
                d += invlim;
                invlim = 0;
            }
        }
        printf("%lld\n", d);
    }
    return 0;
}
