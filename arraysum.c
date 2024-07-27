#include<stdio.h>
int main()
{
    int n;
    float sum;
    printf("enter n ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    for (int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("The sum of elements is %2.f\n",sum);
 return 0;
}