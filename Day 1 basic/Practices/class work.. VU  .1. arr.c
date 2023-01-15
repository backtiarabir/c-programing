#include<stdio.h>
int main(){
 int n,num[100],i,sum=0;

 printf(" How many number u wanna take?\n ans:");
 scanf("%d", &n);


 for(i=0; i<n; i++)
 {
      printf("Enter the value=");
      scanf("%d", &num[i]);
 }


 for(i=0; i<n; i++)
 {


 sum = sum + num[i];

 }

 printf(" the sum is= %d", sum);
 printf(" the avarage is = %.2f",(float)sum/n);


}
