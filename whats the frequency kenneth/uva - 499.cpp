#include<stdio.h>
#include<string.h>

void freqMax(char b[])
{
    int l,a[256];
    char g[256];

    for(int i=0; i<strlen(b); i++)
    {
        for(int j=64; j<125; j++)
        {
            if(b[i]==j)
            a[j]++;
        }
    }
    int maxim=-999999;
    for(int i=0; i<256; i++)
    {
        if(a[i]>maxim)
            maxim=a[i];
    }

    int y=0;
    for(int i=0; i<256; i++)
    {
        if(a[i]==maxim)
            {
                g[y]=a[i];
                y++;
            }
    }


}

int main()
{
    char c[100000];
    char b[10000];

    while(gets(c))
    {


    int k=0;

    for(int i=0; i<strlen(c); i++)
    {
        if(c[i]=='\n')
        {
            b[k]='\0';
            freqMax(b);
            k=0;
            continue;
        }

        b[k]=c[i];
        k++;
    }

    }
    return 0;
}
