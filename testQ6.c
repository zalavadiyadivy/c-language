#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("data.txt", "w"); 

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char name[50];
    char course[50];

   
    for (int i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", name);
        printf("Enter course of student %d: ", i + 1);
        scanf("%s", course);

   
        fprintf(file, "Student Name: %s, Course: %s\n", name, course);
    }

    printf("Data written to file successfully.\n");

   
    fclose(file);


}
