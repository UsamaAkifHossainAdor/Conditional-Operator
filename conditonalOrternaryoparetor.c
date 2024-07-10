// num1 ? num2 : num3 - ternary oparetor or conditional operator
#include <stdio.h>
int main (){
      int num1,num2,learge;
      printf("Enter two numbers : ");
      scanf("%d %d",&num1,&num2);

      learge = (num1>num2) ? num1 : num2;
      printf("Large number =%d\n",learge);

      return 0;

}