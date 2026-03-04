#include <stdio.h>

// Define the structure for student details
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Creating array
    struct Student s[n];

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display student results
    printf("\n--- Student Results ---\n");
    printf("%-10s %-20s %-10s %-10s\n", "Roll No", "Name", "Marks", "Result");
    
    for (i = 0; i < n; i++) {
        printf("%-10d %-20s %-10.2f %-10s\n", 
               s[i].rollNo, 
               s[i].name, 
               s[i].marks, 
               (s[i].marks >= 40) ? "Pass" : "Fail");
    }

    return 0;
}