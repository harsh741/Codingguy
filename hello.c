#include<stdio.h>
int main()
{
   double first,second, temp;
   printf("Enter first number:");
   scanf("%1f",&first);
   printf("Enter second number:");
   scanf("%1f",&second);
   
   //value of first is assigned to temp
   temp=first;
   
   //value of second is assigned to first
   first=second;
   
   //value of temp(initial value of first)is assigned to second
   second=temp;
   printf("\nAfter swapping , first number=%.21f\n",first);
   printf("After swapping, second number= %.21f",second);
   return0;
}


