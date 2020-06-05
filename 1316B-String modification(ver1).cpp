#include <iostream>

std::string lexico_smaller(std::string a,std::string b,int n,int k,int* bestk){
    int i=0;
    while (i<n)
    {
        if (int(a[i])<int(b[i]))
        {
            return a;
        }
        if (int(a[i])>int(b[i]))
        {
            *bestk=k;
            return b;
        }
        i++;
    }
    return a;
}

int main()
{
    std::string s,phs,last_smaller;//ph stands for placeholder
    int t=0,n=0,i=0,k=0,*bestk=0,j,x;
    char phc;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        std::cin>>s;
        for (i = 0; i < n; i++)
        {
            last_smaller[i]='z';
        }
        for (k = 1; k < n+1; k++)
        {
            for (i = 0; i < n-k+1; i++)
            {
                phs=s;
                j=i;
                x=i+k-1;
                while (j<x)
                {
                   phc=phs[j];
                   phs[j]=phs[x];
                   phs[x]=phc;
                   j++;
                   x--;
                }
                last_smaller=lexico_smaller(last_smaller,phs,n,k,bestk);
            }
        }
        std::cout<<last_smaller;
        printf("%d\n",*bestk);
    }
    return 0;
}
