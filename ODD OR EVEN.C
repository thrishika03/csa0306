#include <stdio.h>
int main(){
    int i,a[5];
printf("enter the array elements");
for(i=0;i<5;i++)
{
 scanf("%d",&a[i]);
}
printf("even numbers=");
for(i=0;i<5;i++)
{ if(a[i]%2==0)
{
    printf("%d \t",a[i]);
}
}
printf("odd numbers=");
for(i=0;i<5;i++)
{
  if(a[i]%2!=0)  
  {
    printf("%d \t",a[i]);
  }}
return 0;
}
