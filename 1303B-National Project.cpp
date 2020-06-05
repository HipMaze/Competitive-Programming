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
        while (n>0)
        {
            for (i = 0; i < g; i++)
            {
                if (n <= 0)
                {
                    break;
                }
                n--;
                d++;
            }
            for (i = 0; i < b; i++)
            {
                if (n <= 0)
                {
                    break;
                }
                if (invlim > 0)
                {
                    n--;
                    invlim--;
                }
                d++;
            }
        }
        printf("%d\n", d);
    }
    return 0;
}
