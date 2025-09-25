#include<stdio.h>
int main()
{
    int i,j=0,del,n;
    printf("Enter Size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter number to delete : ");
    scanf("%d",&del);
    for(i=0;i<n;i++)
    {
        if(arr[i]!=del)
        arr[j++]=arr[i];
    }
    if(j==0)
    printf("Number not found \n");
    else
    {   
        for(i=0;i<j;i++)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
