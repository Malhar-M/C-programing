/*Write a C program to calculate the salary of an employee given his basic pay(taken as input from the user) 
Calculate gross salary of employee .Let HRA be 10% of basic pay and TA be 5% of basic pay. Let employees pay professional tax as 2% of total salary.Calculate
net salary payable after deductions.
*/ 

#include<stdio.h>
int main(void){
    double salary,gross_salary,HRA,TA,tax,net_salary;
    printf("Enter employee salary: ");
    scanf("%lf",&salary);
    HRA= 0.10 * salary;         
    TA = 0.05 * salary;           
    gross_salary = salary + HRA + TA;
    tax=0.02*gross_salary;
    net_salary=gross_salary-tax;

        printf("\n");
    printf("Basic Pay : %.2lf\n",salary);
    printf("HRA (10%%): %.2lf\n",HRA);
    printf("TA (5%%): %.2lf\n", TA);
    printf("------------------------\n");
    printf("Gross Salary: %.2lf\n", gross_salary);
    printf("Professional Tax: %.2lf\n", tax);
    printf("\n");
    printf("NET SALARY PAYABLE: %.2lf\n", net_salary);
}
