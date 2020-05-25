#include <iostream>

int ProduitDigits(unsigned long long int n)
{
    int mini = 9;
    int maxi = 0;

    while (n>0)
    {
        int r = n % 10;
        maxi = std::max(r, maxi);
        mini = std::min(r, mini);

        n = n / 10;
    }
    return maxi * mini;
}

int main()
{
    int t=0;
    unsigned long long int k=0,a=0,p=0;
    scanf("%d", &t);
    while (t)
    {
        scanf("%lld %lld", &a,&k);
        for (unsigned long long int i = 1; i < k; i++)
        {
            p=ProduitDigits(a);
            if (p==0)
            {
                break;
            }
            a+=p;
        }
        printf("%lld\n",a);
        t--;
    }

    return 0;
}
