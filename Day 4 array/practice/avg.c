#include <conio.h>


int main()
{
    int a[1000],i,n,sum=0,avg = 0;

    printf("Enter size of the array : ");
    scanf("%d",&n);

    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }


    for(i=0; i<n; i++)
    {

        sum=sum + a[i];
    }
    avg = sum / n;
    printf("avg of array is : %d",avg);

    return 0;
}
