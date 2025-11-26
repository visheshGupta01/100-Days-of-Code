#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
   
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));

   
    strcpy(s->name, "Tina");
    s->roll = 105;
    s->marks = 88;

   
    printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll, s->marks);

    // free memory after use
    free(s);

    return 0;
}
