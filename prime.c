#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter Size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers : ",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Prime numbers are : ");
    for(i=n-1;i>=0;i--)
    {
        j=arr[i]%2;
        if(arr[i]==2)
        printf("%d ",arr[i]);
        else if(j==0 || arr[i]==1)
        continue;
        else
        printf("%d ",arr[i]);
    }
    
    return 0;
}
