#include<stdio.h>
#include<string.h>

void revers(char s[], int x)
{
    int i;

    for(i=x-1; i>=0; i--)
    {
        printf("%c", s[i]);
    }

}


int main()
{
    int i,k,c;

    char a[10000];
    char b[10000];

    while(gets(a))
    {
        k=0;
        c=0;
        for(i=0; i<=strlen(a); i++)
        {

            if(a[i]!=32&&a[i]!=0)
            {
               b[k]=a[i];
               k++;
            }
            else
            {
                b[k]='\0';
                if(c)
                    printf(" ");
                revers(b,k);
                c++;
                k=0;
            }
        }

        printf("\n");
    }

    return 0;
}
