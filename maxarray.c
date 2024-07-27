#include<stdio.h>
int main()
{
    int n;
    int max=0;
    printf("No of element needed in array ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++)
    {
        if (arr[i]>max)
        max=arr[i];
    }
    printf("The maximum no is %d",max);
 return 0;
}