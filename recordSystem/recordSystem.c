#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
  char name[50];
  int roll;
  float marks;
};

int main()
{
  struct Student s;
  FILE *fp = fopen("student.txt", "a");

  printf("Enter name: ");
  scanf(" %[^\n]", s.name);
  printf("Enter roll number: ");
  scanf("%d", &s.roll);
  printf("Enter marks: ");
  scanf("%f", &s.marks);

  fprintf(fp, "Name: %s, Roll: %d, Marks: %.2f\n", s.name, s.roll, s.marks);
  fclose(fp);
  printf("Record saved to student.txt\n");

  return 0;
}
