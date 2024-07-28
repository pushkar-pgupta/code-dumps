#include <stdio.h>
void main()
{
    int n,max=0,max2=0;
    printf("ENter the no. of values :- ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements entered are\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("The max element is %d\t\n",max);
    for(int i=0;i<n;i++)
    {
        if(a[i]>max2 && a[i]<max )
        max2=a[i];
    } 
    printf("THe seocnd highest element is %d\t",max2);
}
