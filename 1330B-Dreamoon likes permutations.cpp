#include <iostream>

int isInArray(int *p, int num, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (p[i] == num)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int t, n, i, pause = 0, max = 0, swapable = 0;
    int *all, *p1, *p2;
    scanf("%d", &t);
    p1 = new int[1];
    p2 = new int[1];
    all = new int[1];
    while (t--)
    {
        swapable = 0;
        pause = 0;
        max = 0;
        delete[] all;
        delete[] p1;
        delete[] p2;
        scanf("%d", &n);
        all = new int[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &all[i]);
            if (all[i] > max)
            {
                max = all[i];
            }
            /*for (i = 0; i < n; i++)
            {
                printf("%d ",all[i]);
            }
            printf("\n%d",max);*/
        }
        p1 = new int[n];
        p2 = new int[n];
        p1[max - 1] = 0;
        p1[max - 1] = 0;
        for (i = 0; i < n; i++)
        {
            if (isInArray(p1, all[i], i + 1))
            {
                pause = i;
                break;
            }
            p1[i] = all[i];
        }
        if (pause>max || pause == 0)
        {
            printf("0\n");
            continue;
        }
        for (i = pause; i < max; i++)
        {
            if (isInArray(p1, all[i], i + 1))
            {
                pause = 0;
                break;
            }
            p2[i] = all[i];
        }
        if (pause == 0)
        {
            printf("0\n");
            continue;
        }
        if (p1[max - 1] == 0 || p2[max - 1] == 0)
        {
            printf("0\n");
            continue;
        }
        else
        {
            for (i = 0; i < pause; i++)
            {
                if (p1[i]!=p2[i])
                {
                    swapable = 0;
                    break;
                }
                swapable = 1;
            }
            if (swapable)
            {
                printf("2\n");
                printf("%d %d", n - max, max);
                printf("%d %d", max, n - max);
            }
            else
            {
                printf("1\n");
                if (p1[max - 1] == 0)
                {
                    printf("%d %d", n - max, max);
                }
                else
                {
                    printf("%d %d", max, n - max);
                }
            }
        }
    }
    //scanf("%d",&t);
    return 0;
}
