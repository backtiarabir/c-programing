#include<stdio.h>
double A(double x,double y, double z);
int main()
{
    double x,y,z;
    scanf("%lf%lf%lf",&x,&y,&z);
    printf("%lf",A(x,y,z));
    return 0;

}
double A(double x,double y, double z)
{
    return (x*x)+(2*y*z)-(z*z);
}
