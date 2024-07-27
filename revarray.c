#include<stdio.h>
int main()
{
    int n,j,i;
    printf("enter n ");
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the orginal array\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for (i=0,j=n-1;i<n;i++,j--)
    {
        b[i]=a[j];
    }
    printf("\n");
    printf("The reversed array is\n ");
    for (i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
    return 0;
}
