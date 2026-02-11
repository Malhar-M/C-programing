/*To accept a student's five course marks and compute his/her result. Student is passing if he/she
scores marks equal to and above 40 in each course. If student scores aggregate greater than 75%,
then the grade is distinguished. If aggregate is 60>= and <75 then the grade of first division. If
aggregate is 50>= and <60, then the grade is second division. If aggregate is 40>= and <50, then
the grade is third division.*/

#include<stdio.h>
int main(void){
int marks1,marks2,marks3,marks4,marks5,total,aggregate;
printf("Enter marks of 5 subjects: ");
scanf("%d,%d,%d,%d,%d",&marks1,&marks2,&marks3,&marks4,&marks5);
  if (marks1 < 40 || marks2 < 40 || marks3 < 40 || marks4 < 40 || marks5 < 40) {
        printf("\n Result: FAILED (Scored below 40 in one or more subjects) \n");
    } 
    else{
        total = marks1 + marks2 + marks3 + marks4 + marks5;
        aggregate = total / 5;

        printf("\nTotal Marks: %.2f", total);
        printf("\nAggregate Percentage: %.2f%%", aggregate);
        printf("\nResult: PASSED");

        if (aggregate > 75) {
            printf("\nGrade: DISTINCTION\n");
        } 
        else if (aggregate >= 60) {
            printf("\nGrade: FIRST DIVISION\n");
        } 
        else if (aggregate >= 50) {
            printf("\nGrade: SECOND DIVISION\n");
        } 
        else {
            printf("\nGrade: THIRD DIVISION\n");
        }
     }
        return 0;
    }

