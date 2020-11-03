#include<stdio.h>
int main()
    {   int t,l,i,j;
        char s[100000];
        scanf("%d",&t);
        while(t--)
        {   scanf("%s",s);
            l=strlen(s);
            i=l-1;
            j=l/2;
            if(l%2==1)
            { j++;
            }
            for(;i>j;i--)
            {
                printf("%c%c",s[i],s[i-j]);
            }
            if(l%2==1)
            {
                printf("%c%c",s[i],s[i-j]);
                i--;
                printf("%c\n",s[i]);
            }
            else
            { printf("%c%c\n",s[i],s[i-j]);
            }
        }
        return 0; }