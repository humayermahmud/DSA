#include<stdio.h>
int main()
{
    int a[50],i,n,x,size;
    printf("Enter the array size : ");
    scanf("%d",&n);
    printf("Enter the array elements - ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements - \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n\nEnter the value for search : ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]!=x)
        {printf("value is not present at position %d\n",(i+1));}

        else
        {printf("value is present at position\t(%d)\n",(i+1));}
    }



    return 0;
}

