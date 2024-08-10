#include<stdio.h>
int main()
{
    int n;
    int low,high,mid;
    int key;
    int found=0;
    printf("No of element needed in array ");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Enter emeemt to be searched\n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            found =1;
            break;
        }
        else if(a[mid]<key)
        low=mid+1;
        else
        high=mid-1;
    }
    if(found==1)
    {
        printf("Search Succhesful\n");
        printf("%d",mid);
    }
    else
    {
        printf("Search UNSUCCESSFULL\n");
    }
}