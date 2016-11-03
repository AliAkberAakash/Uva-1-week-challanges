#include<stdio.h>

int main()
{
   long int i,j,n,p,q,highest, cl;

    while(scanf("%ld %ld", &i,&j)!=EOF)
{
    if(i<j)
    {
         highest=-999999;
        for(n=i; n<=j; n++)
        {
            cl=0;

            p=n;

            aakash:

            cl++;
            if(p==1)
                {
                    if(cl>highest)
                        highest=cl;
                    continue;
                }
            else if(p%2==1)
                {
                    p=3*p+1;
                    goto aakash;
                }
            else if(p%2==0)
                {
                    p=p/2;
                    goto aakash;
                }
        }
    }

    else
    {
        highest=-999999;
        for(n=j; n<=i; n++)
        {
            p=n;

            cl=0;

            aakash2:

            cl++;
            if(p==1)
                {
                    if(highest<cl)
                        highest=cl;
                    continue;
                }
            else if(p%2==1)
                {
                    p=3*p+1;
                    goto aakash2;
                }
            else if(p%2==0)
                {
                    p=p/2;
                    goto aakash2;
                }
        }

     }

     printf("%ld %ld %ld\n", i, j, highest);

    }

     return 0;
}
