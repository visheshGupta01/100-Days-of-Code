/*
Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
int main() {
    struct Employee emp1, emp2;
    FILE *file;

  
    printf("Enter details for Employee 1:\n");
    printf("Name: ");
    fgets(emp1.name, sizeof(emp1.name), stdin);
    printf("ID: ");
    scanf("%d", &emp1.id);
    printf("Salary: ");
    scanf("%f", &emp1.salary);
    getchar();  

    printf("Enter details for Employee 2:\n");
    printf("Name: ");
    fgets(emp2.name, sizeof(emp2.name), stdin);
    printf("ID: ");
    scanf("%d", &emp2.id);
    printf("Salary: ");
    scanf("%f", &emp2.salary);

    file = fopen("employees.dat", "wb");
    if (file != NULL) {
        fwrite(&emp1, sizeof(struct Employee), 1, file);
        fwrite(&emp2, sizeof(struct Employee), 1, file);
        fclose(file);
        printf("Employee data written to file successfully.\n");
    } else {
        printf("Error opening file for writing.\n");
        return 1;
    }

    file = fopen("employees.dat", "rb");
    if (file != NULL) {
        struct Employee empRead;
        printf("\nEmployee details read from file:\n");
        while (fread(&empRead, sizeof(struct Employee), 1, file)) {
            printf("Name: %sID: %d | Salary: %.2f\n", empRead.name, empRead.id, empRead.salary);
        }
        fclose(file);
    } else {
        printf("Error opening file for reading.\n");
        return 1;
    }

    return 0;
}
