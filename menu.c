#include<stdio.h>
main()
{
//1.Display the menu
printf("Pick an item: \n1.Pizza, Rs 239 \n2.Pasta' Rs 179 \n3.Burger, Rs 129 \n4.Sandwich, Rs 149 \n5.French Fries, Rs 99");
//2. REad their choice
int choice=0;
scanf("%d",&choice);
//3. Display based on their choice

switch(choice)
{
  case 1:
        printf("Food item - Pizza\n Price- Rs 239 ");
        break;
  case 2:
        printf("Food item - Pasta\n Price- Rs 179 ");
        break;
  case 3:
        printf("Food item - Burger\n Price- Rs 129 ");
        break;
  case 4:
        printf("Food item - Sandwich\n Price- Rs 149 ");
        break;
  case 5:
        printf("Food item - French Fries\n Price- Rs 99 ");
        break;
  default :("Use the default case")
 return 0;
}
}
