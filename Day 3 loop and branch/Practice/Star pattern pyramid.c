/*----------star pattern pyramid-------*/
#include<stdio.h>
#include<conio.h>
int main(void)
{
    int rows, cols,n=0;
    printf("Enter pattern line: ");
    scanf("%d",&n);
   /* printf("Enter total row: \n");
    scanf("%d",&rows);
    printf("Enter total cols: \n");
    scanf("%d",&cols);  */

    for(rows =1; rows<=n; rows++)
    {
        for(cols =1; cols <=rows; cols++)
        {
            printf("*");
        }
            printf("\n");
    }

    getch();
    return 0;
}
