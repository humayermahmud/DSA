#include<stdio.h>
int main()
{
    int a[10],x,n,pos,i;
    printf("Enter the array size : ");
    scanf("%d",&n);
    printf("Enter the array element : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    // insert middle of the array
    printf("Enter the element which will be insert : ");
    scanf("%d",&x);
    printf("Enter the insertion position : ");
    scanf("%d",&pos);
    for(i=n;i>pos-1;i--)
    {
        a[i]=a[i-1];
    }
    a[i]=x;
    n++;
    for(i=0;i<n;i++)
    {
        printf("Index : %d......Value : %d......Position : %d\n",i,a[i],i+1);
    }
    /*//insert last of the array
    printf("Enter the element which will be insert at the end : ");
    scanf("%d",&x);
    a[i]=x;
    n++;
    for(i=0;i<n;i++)
    {
        printf("Index : %d......Value : %d......Position : %d\n",i,a[i],i+1);
    }*/
    return 0;
}

