#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[33],i,n,x,l,h,q;
    printf("enter number of elements\n");
    scanf("%d",&n);
    printf("enter %d elements in nondecreasing order\n",n);
    for(i=0;i<n;i++)
    {
                   scanf("%d",&a[i]);
    }
    printf("enter the number to be searched\n");
    scanf("%d",&x);
    l=0;
    h=n-1;
     q=Binsrch(a,l,h,x);
    if(q>=l&&q<=h)
               printf("the element %d in the array is at index %d\n",x,q);
    else
               printf("the number is not present in the list\n");

    return 0;
}
int Binsrch(int a[],int l,int h,int x)
{
               int mid;
               while (l<=h)
               {
                              mid=(l+h)/2;
                              if(x<a[mid])
                                             h=mid-1;
                              else if(x>a[mid])
                                             l=mid+1;
                              else
                                             return mid;
               }
               return 999;
}
