#include <iostream>
#include <cmath>

int main()
{
    int t, n, m, k, d, a, b;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &n, &m, &k);
        d = n / k;
        a = std::min(m, d);
        b = (m - a + k - 2) / (k - 1);
        printf("%d \n", a - b);
    }
    return 0;
}
