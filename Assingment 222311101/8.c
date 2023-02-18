//C Program To Convert Kilometers into Meters
#include<stdio.h>
int main(){
  int m;
  float km;

  //Asking for input
  printf("Enter the distance in kilometers: ");
  scanf("%f", &km);

  //Kilometers into meters
  m = km * 1000;
  printf("%.2f in Kilometers = %d in Meters", km, m);
  return 0;
}
