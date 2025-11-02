/*
Q145: Return a structure containing top student's details from a function.

Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
struct Student findTopStudent(struct Student students[], int n) {
    struct Student topper = students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].marks > topper.marks) {
            topper = students[i];
        }
    }
    return topper;
}
int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    struct Student topStudent = findTopStudent(students, n);
    printf("Top Student: %s | Roll: %d | Marks: %.2f\n", topStudent.name, topStudent.roll_no, topStudent.marks);
    return 0;
}
