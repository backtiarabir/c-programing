#include <stdio.h>
struct student
{
    int roll;
    int batch;
    float marks;
} s[5];

int main()
{
    int i;
    struct student value[5];

    // input
    for (i = 0; i < 5; i++)
    {
        printf("Enter your roll number: ");
        scanf("%d",&value[i].roll);
        printf("Enter your batch: ");
        scanf("%d", &value[i].batch);
        printf("Enter marks: ");
        scanf("%f", &value[i].marks);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; i++)
    {
        if(value[i].marks>30)
            {
        printf("roll :%d\n",value[i].roll);
        printf("batch :%d\n",value[i].batch);
        printf("Marks: %.1f",value[i].marks);
        printf("\n");
            }
        else
        {
            printf("\nFail\n");
        }
    }
    return 0;
}
