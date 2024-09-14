#include<stdio.h>
int prime(int n)
{
    int flag=1;
    int i=2;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if (flag==1)
    return 1;
    else
    return 0;
}
int main()
{
    int n,c;
    printf("ENter nn : ");
    scanf("%d",&n);
    c=prime(n);
    printf("%d",c);
    return 0;
}