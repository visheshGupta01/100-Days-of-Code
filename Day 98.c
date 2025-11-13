/*
Q148: Take two structs as input and check if they are identical.

Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/


#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
    float marks;
};

int main() {
    struct Student student1, student2;

    printf("Enter details for Student 1 (Name ID Marks): ");
    scanf("%s %d %f", student1.name, &student1.id, &student1.marks);

    
    printf("Enter details for Student 2 (Name ID Marks): ");
    scanf("%s %d %f", student2.name, &student2.id, &student2.marks);

    
    if (strcmp(student1.name, student2.name) == 0 && student1.id == student2.id && student1.marks == student2.marks) {
        printf("Same\n");
    } else {
        printf("Different\n");
    }

    return 0;
}

