#include <stdio.h>
int main() {
    int a[100];
    int n,i,s;
    int low,high,mid;
    printf("enter no of elements in array:");
    scanf("%d",&n);
    printf("enter the elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched");
    scanf("%d",&s);
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<high){
        if(a[mid]<s)
        low=mid+1;
        else if (a[mid] == s) {
        printf("%d found at location %d",s, mid+1);
        break;}
        else
       high = mid - 1;
       mid = (low + high)/2;
       }
       if(low > high)
       printf("Not found! %d isn't present in the list",s);
      return 0;
}
