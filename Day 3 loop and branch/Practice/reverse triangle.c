/*----------Reverse star pattern pyramid-------*/
#include<stdio.h>
#include<conio.h>
int main(void)
{
    int rows, cols,n=0;
   /* printf("Enter pattern line: ");
    scanf("%d",&n);*/


    for(rows =1; rows<=n; rows++)
    {
        for(cols =n; cols <=rows; cols++)
        {
            printf("*");
        }
            printf("\n");
    }

    getch();
    return 0;
}
