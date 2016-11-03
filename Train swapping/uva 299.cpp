#include<stdio.h>

int swp(int a[], int x)
{
    int i,j, temp, s;

    s=0;
    for(i=0; i<x; i++)
    {
        for(j=i+1; j<x; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

                s++;
            }
        }
    }

    return s;
}


int main()
{
    int i,j,t,s, l, a[100000];

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &l);

        for(i=0; i<l; i++)
            scanf("%d", &a[i]);

        s=swp(a, l);

        printf("Optimal train swapping takes %d swaps.\n", s);
    }

    return 0;
}

