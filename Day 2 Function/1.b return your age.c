#include<stdio.h>
int getage()
{
    int age;
    scanf("%d",&age);
    return age;
}
int main()
{
    int value;
    value = getage();
    printf("%d",value);
    return 0;
}

