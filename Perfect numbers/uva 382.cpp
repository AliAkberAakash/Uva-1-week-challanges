#include<stdio.h>


int main()
{
    int i,j,k, n, s, p[100000];

    printf("PERFECTION OUTPUT\n");

    while(1)
    {
        scanf("%d", &n);

        if(n==0)
            break;
        k=0;
        for(i=1; i<=n/2; i++)
        {
            if((n/i)*i==n)
            {
                p[k]=i;
                k++;
            }
        }

        s=0;
        for(i=0; i<k; i++)
            {
                if(p[i]>0)
                s=s+p[i];
            }

        if(s==n)
            printf("%5d  PERFECT\n", n);
        else if(s>n)
            printf("%5d  ABUNDANT\n", n);
        else
            printf("%5d  DEFICIENT\n", n);

    }

    printf("END OF OUTPUT\n");

    return 0;
}
