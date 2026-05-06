//the following code is to find the largest number in array
#include<stdio.h>
int main()
{
  int size;
  printf("enter the size of array\n");
  scanf("%d",&size);
  int a[size],i,max;
  printf("enter the elements of the array\n");
  for(i=0;i<size;i++)
    {
      scanf("%d",&a[i]);
    }
    max = a[0];
  printf("finding the largest element\n");
  for(i=0;i<size;i++)
    {
      if(a[i]>max);
      {
         max=a[i];
      }
    }
      printf("the largest element is %d \n",max);
}
