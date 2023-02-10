#include <stdio.h>
#include<string.h>
struct student {
   // char firstname;
   // char departmentname;
    int id;
    int batch;
    float grade;
};
int main()
{
    int a;
    struct student st;
    //take input
  /*  printf("Enter your first name: ");
    scanf("%s",&st.firstname);
    printf("Enter your department name: ");
    scanf("%s",&st.departmentname);*/
    printf("Enter your ID: ");
    scanf("%d",&st.id);
    printf("Enter your batch no: ");
    scanf("%d",&st.batch);
    printf("Enter your grade: ");
    scanf("%f",&st.grade);

    //outout
  /*  printf("Name : %s\n",st.firstname);
    printf("Name : %s\n",st.departmentname);*/
    printf("ID : %d\n",st.id);
    printf("Batch : %d\n",st.batch);
    printf("CGP : %.2lf\n",st.grade);

    return 0;
}
