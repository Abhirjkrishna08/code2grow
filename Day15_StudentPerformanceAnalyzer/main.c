#include <stdio.h>

int main() {
    int n, marks[10],i, highest, lowest,passed = 0, failed = 0,grade_A = 0, grade_B = 0, grade_C = 0, grade_D = 0;
    float average,total = 0.0;

    printf("Enter total number of students (max 10): ");
    scanf("%d", &n);
    if (n < 1 || n > 10) {
        printf("Invalid number of students.\n");
        return 1;
    }

    printf("Enter marks for each student:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    highest = marks[0];
    lowest = marks[0];

    for (i = 0; i < n; i++) {
        total += marks[i];
        if (marks[i] > highest) highest = marks[i];
        if (marks[i] < lowest) lowest = marks[i];

        
        if (marks[i] >= 90 && marks[i] <= 100) {
            grade_A++;
            passed++;
        } 
        else if (marks[i] >= 80){
            grade_A++;
            passed++;
        } 
        else if (marks[i] >= 70){
            grade_B++;
            passed++;
        } 
        else if (marks[i] >= 60){
            grade_C++;
            passed++;
        }
        else if (marks[i] >= 50){
            grade_D++;
            passed++;
        } 
        else {
            failed++;
        }
    }

    average = total / n;
    printf("Result Summary\n");
    printf("Average Marks: %.2f\n", average);
    printf("Highest Marks: %d\n", highest);
    printf("Lowest Marks: %d\n", lowest);
    printf("Total Passed Students: %d\n", passed);
    printf("Total Failed Students: %d\n", failed);
    printf("Grade Distribution:\n");
    printf("A: %d\n", grade_A);
    printf("B: %d\n", grade_B);
    printf("C: %d\n", grade_C);
    printf("D: %d\n", grade_D);
    printf("Fail: %d\n", failed);

    return 0;
}
