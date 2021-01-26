#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
 
    char Name[30];
    int Age;
    int Phone number;
    int salary;
 
} Employee;
 
int main()
{
    int i, n=20;
 
    Employee employees[n];
 
    //Taking each employee detail as input
 
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){
 
        printf("Employee %d:- \n",i+1);
        //Name
        printf("Name: ");
        scanf("%s",employees[i].name);
        //ID
        printf("Age: ");
        scanf("%d",&employees[i].Age);
        //Salary
        printf("Phone number: ");
        scanf("%d",&employees[i].Phone number);
        printf("salary");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }
 
    //Displaying Employee details
 
    printf("-------------- All Employees Details ---------------\n");
 
    for(i=0; i<n; i++){
 
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Age\t: ");
        printf("%d \n",employees[i].Age);
 
        printf("Phone number\t: ");
        printf("%d \n",employees[i]. Phone number);
        
        printf("salary\t: ");
        printf ("%d \n", employees [i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}
