#include <stdio.h>
int printstar(int n)
{
    for(int i=1;i<=n;i++)
    {
        for (int j=0;j<=i-1;j++)
        {
            printf("*");
        }
    
    printf("\n");
    }

}

int main()
{
    int n;
    printf("Enter n :- ");
    scanf("%d",&n);
    printstar(n);
    return 0;
}
