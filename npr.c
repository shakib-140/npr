#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,i,sum=1,sum2=1,j,npr;
    printf("enter the value of n=");
    scanf("%d",&n);
    printf("enter the value of r=");
    scanf("%d",&r);
    for(i=1; i<=n; i++)
    {
        sum=sum*i;
    }

    for(j=1; j<=(n-r); j++)
    {
        sum2=sum2*j;
    }

    npr=(sum/sum2);
    printf("the npr is=%d",npr);

    getch();
}
