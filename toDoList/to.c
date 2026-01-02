#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Task {
    char desc[100];
};

int main() {
    FILE *file;
    struct Task task;
    int choice;

    while (1) {
        printf("\nTo-Do List Menu:\n1. Add Task\n2. View Tasks\n3. Exit\nChoose: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 1) {
            file = fopen("tasks.txt", "a");
            printf("Enter task description: ");
            fgets(task.desc, sizeof(task.desc), stdin);
            fputs(task.desc, file);
            fclose(file);
        } else if (choice == 2) {
            file = fopen("tasks.txt", "r");
            printf("\nYour Tasks:\n");
            while (fgets(task.desc, sizeof(task.desc), file)) {
                printf("- %s", task.desc);
            }
            fclose(file);
        } else {
            break;
        }
    }
    return 0;
}