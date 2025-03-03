#include<stdio.h>
int main()
{
    //Humayer mahmud
    int a[10],x,n;
    printf("Enter the array size : ");
    scanf("%d",&n);
    printf("Enter the array element : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element which will be at beginning : ");
    scanf("%d",&x);
    for(int i=n;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=x;
    n++;
    for(int i=0;i<n;i++)
    {
        printf("Index : %d......Value : %d......Position : %d\n",i,a[i],i+1);
    }
    return 0;
}
