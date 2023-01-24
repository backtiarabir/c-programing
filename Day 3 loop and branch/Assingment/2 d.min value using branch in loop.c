#include<stdio.h>
int main()
{
    int i=0,n=0,a=0,minval;
    printf("Enter a positive number :");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("Enter your value:\n");
        scanf("%d",&a);

        if(a<minval){
            minval=a;
        }


    }
    printf("Your minimum value : \n");
    printf("%d",minval);

    return 0;
}
