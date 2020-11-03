#include<stdio.h>
int main()
{
    
    int h,p,q;
    scanf("%d%d%d",&h,&p,&q);
    if(q>p||(h!=p&&p==q))
    printf("-1");
    else{
        
        int count=0;
        while(1)
        {
           count+=1;
           h-=p;
           if(h<=0)
           break;
           h+=q;
        }
        printf("%d",count);
        
    }

return 0;
}