#include<stdio.h>
int main()
{
    int n;
   printf("No of element needed in array ");
   scanf("%d",&n);
   int arr[n];
   for (int i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);

   }
   printf("The requied elements are\n");
   for (int j=0;j<n;j++)
   {
    printf("%d",arr[j]);
    printf("\n");
   }
 return 0;
}