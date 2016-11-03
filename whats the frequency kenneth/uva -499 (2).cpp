#include<stdio.h>
#include<string.h>

int main()
{
    char s[100000];
    int a[256];
    int i,j;

    while(gets(s))
    {
        for(i=0; i<256; i++)
            a[i]=0;

        int maxim=-999999;

        for(i=0; i<strlen(s); i++)
            {
                for(j=65; j<=90; j++)
                {
                    if(s[i]==j)
                        a[j]++;
                }
                for(j=97; j<=122; j++)
                {
                    if(s[i]==j)
                        a[j]++;
                }
            }

        for(j=64; j<129; j++)
                {
                    if(a[j]>maxim)
                        maxim=a[j];
                }
        for(j=64; j<129; j++)
                {
                    if(a[j]==maxim)
                        printf("%c", j);
                }
        printf(" %d\n", maxim);
    }

    return 0;
}
