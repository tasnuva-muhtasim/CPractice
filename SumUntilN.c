#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum = %d",sum);
   return 0;
}
