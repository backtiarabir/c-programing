/*input n times, AVG, */
#include<stdio.h>
int n;
int i;
int x;
int sum = 0;
int avg = 0;
int maxval = 0;
int minval = INT_MIN;
void summation()
{
   printf("How many times you want to print : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {

        scanf("%d",&x);
        if(minval>x)
        {
            minval = x;
        }
        sum = sum + x;

    }
    printf("Sum of n numbers :");
     printf("%d\n",sum);
}
void avarage()
{
     avg = sum/n;
    printf("Avarage value of n numbers:");
    printf("%d\n",avg);
}
int main()
{




 printf("%d",minval);
/* minval = maxval;

if(minval<maxval)
 {
     printf("%d\n",maxval);
 }
 else
    printf("%d\n",minval);
    return 0;
}*/
