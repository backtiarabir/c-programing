#include<stdio.h>
int main()
{
    int i=0,n=0,a=0,maxval=0;
    printf("Enter a positive number :");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("Enter your value:\n");
        scanf("%d",&a);

        if(a>maxval){
            maxval=a;
        }


    }
    printf("Your maximum value : \n");
    printf("%d",maxval);

    return 0;
}
