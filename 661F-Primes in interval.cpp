#include <iostream>

int isPrime(int n)
{
    int m = n / 2;
    for (int i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a=0,b=0,c=0;
    scanf("%d %d",&a,&b);
    for (int i = a; i <= b; i++)
    {
        c+=isPrime(i);
    }
    printf("%d",c);
    scanf("%d",&c);
    return 0;
}
