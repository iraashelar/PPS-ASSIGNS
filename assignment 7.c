
#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[30];
    int marks[3];
    int total;
    double per;
};

int main() {
    int n, i, j;

    printf("Enter the number of students: ");

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: Please enter a valid number of students.\n");
        return 1;
    }

    struct student s[n];

    for (i = 0; i < n; i++) {

        printf("\nEnter the roll number: ");
        if (scanf("%d", &s[i].roll) != 1) {
            printf("Error: Invalid roll number.\n");
            return 1;
        }

        getchar();

        printf("Enter the name: ");
        if (fgets(s[i].name, sizeof(s[i].name), stdin) == NULL) {
            printf("Error: Invalid name.\n");
            return 1;
        }

        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        s[i].total = 0;

        printf("Enter marks of 3 subjects: ");

        for (j = 0; j < 3; j++) {

            if (scanf("%d", &s[i].marks[j]) != 1) {
                printf("Error: Invalid marks.\n");
                return 1;
            }

            if (s[i].marks[j] < 0 || s[i].marks[j] > 100) {
                printf("Error: Marks must be between 0 and 100.\n");
                return 1;
            }

            s[i].total += s[i].marks[j];
        }

        s[i].per = s[i].total / 3.0;
    }

    printf("\n%-12s%-20s%-12s%-12s%-12s%-12s%s\n",
           "Roll No", "Name", "Subject: 1", "Subject: 2",
           "Subject: 3", "Total", "Percentage");

    for (i = 0; i < n; i++) {

        printf("%-12d%-20s%-12d%-12d%-12d%-12d%.2f\n",
               s[i].roll, s[i].name,
               s[i].marks[0], s[i].marks[1],
               s[i].marks[2], s[i].total, s[i].per);
    }

    return 0;
}