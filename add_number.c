#include<stdio.h>
int main()
{
    int n,i;
    int s=0;
    printf("\t\tenter a number to get the sum of digits up till that number\n");
    scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            s=s+i;
        }
        printf("%d is the sum",s);

    return(0);
}
