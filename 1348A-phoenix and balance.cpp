#include <iostream>
#include <cmath>

int main()
{
    int a=0,b=0,t,s;//a pile1, b pile2, c placeholder, t nbr test cases, s current test case
    scanf("%d",&t);
    while(t){
        scanf("%d",&s);
        a+=pow(2,s);
        for (int i = 0; i < s/2; i++)
        {
            b+=pow(2,s-1-i);
        }
        for (int i = 1; i < s/2; i++)
        {
            a+=pow(2,i);
        }
        printf("%d \n",a-b);
        t--;
        a=0;
        b=0;
        s=0;
    }
    return 0;
}
/*
Probleme clairement greedy
on veut prendre les coins les separer en deux piles min maxed
on a tjrs un nombre pair de coins
donc on prends les extremites dún cote et de láutre les milieux
*/