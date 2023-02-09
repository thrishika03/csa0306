#include <stdio.h>

int main() {
    int a[100];
    int n,i,s;
    printf("enter no of elements in array:");
    scanf("%d",&n);
    printf("enter the elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        break;
    }
        if(i<n)
        printf("Element found at index %d",i);
    else
        printf("Element not found");
  
    return 0;
    }
