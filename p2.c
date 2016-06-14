#include<stdio.h>


void main()
{

 long num1=1,num2=2;
 long tmp,sum=0;

  do{
      tmp=num1+num2;
      num1=num2;
      num2=tmp;

      if(num2%2==0)
      {
          sum+=num2;
      }

      }while(num2<=4000000);

      printf("%li",sum+2);
}
