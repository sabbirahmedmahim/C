#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book
{
    char title[100];
    char author[100];
    int id;
};

int main()
{
    struct Book book;
    int choice;
    FILE *file;

    while (1)
    {
        printf("\nLibrary Menu:\n1. Add Book\n2. View Books\n3. Exit\nChoose: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 1)
        {
            file = fopen("library.txt", "a");
            printf("Enter book title: ");
            fgets(book.title, sizeof(book.title), stdin);
            printf("Enter author name: ");
            fgets(book.author, sizeof(book.author), stdin);
            printf("Enter book ID: ");
            scanf("%d", &book.id);
            fprintf(file, "%s%s%d\n", book.title, book.author, book.id);
            fclose(file);
        }
        else if (choice == 2)
        {
            file = fopen("library.txt", "r");
            printf("\nLibrary Books:\n");
            char ch;
            while ((ch = fgetc(file)) != EOF)
                putchar(ch);
            fclose(file);
        }
        else
        {
            break;
        }
    }
    return 0;
}