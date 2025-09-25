#include<stdio.h>
int main() {
    int n,temp,j,k,i,max,min;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d Elements : ",n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    j=k=0;
    for(i=1;i<n;i++) {
        if(arr[i]>max) {
            max=arr[i];
            j=i;
        }
        if(arr[i]<min) {
            min=arr[i];
            k=i;
        }
    }
    printf("Maximum element is %d \n",max);
    printf("Minimum element is %d \n",min);
    temp=arr[k];
    arr[k]=arr[j];
    arr[j]=temp;
    printf("After swapping : ");
    for(i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}
