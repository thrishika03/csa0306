#include <stdio.h>

int main() {
    int a[100];
    int n,i,k,x,pos;
    int index;
    printf("enter no of elements in array:");
    scanf("%d",&n);
    printf("enter the elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("1. insert 2. delete 3.display");
    printf(" enter the operation ");
    scanf("%d",&k);
    switch(k)
    {
        case 1:  printf("\nEnter the new element to be inserted: ");
                 scanf("%d", &x);
                 printf("Enter the position where element is to be inserted: ");
                 scanf("%d", &pos);
                 n=n+1;
                 for(i = n-1; i >= pos; i--)
                 a[i]=a[i-1];
                 a[pos-1]=x;
                 for (i = 0; i < n; i++)
                {
                  printf("%d ", a[i]);
                }
        case 2:  printf("Enter the index of the element to be deleted: ");
                 scanf("%d", &index);
                 if (index >= n+1)  
                {  
                 printf (" \n Deletion is not possible in the array.");  
                }  
                else  
               {  
               for (i = index; i < n - 1; i++)
               a[i] = a[i + 1];
               printf("The array after deleting the element is: ");
               for (i = 0; i < n - 1; i++)
               printf("%d ", a[i]);
               return 0;
            }
        case 3: printf("the array");
              for(i=0;i<n;i++)
              {
                  printf("%d \t",a[i]);
              }
    }
}
