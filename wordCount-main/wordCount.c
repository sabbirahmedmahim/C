#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    printf("Usage: %s filename\n", argv[0]);
    return 1;
  }

  FILE *file = fopen(argv[1], "r");
  if (!file)
  {
    printf("Error opening file.\n");
    return 1;
  }

  int lines = 0, words = 0, chars = 0;
  int in_word = 0;
  char c;

  while ((c = fgetc(file)) != EOF)
  {
    chars++;

    if (c == '\n')
      lines++;

    if (isspace(c))
    {
      in_word = 0;
    }
    else if (!in_word)
    {
      in_word = 1;
      words++;
    }
  }

  fclose(file);

  printf("Lines: %d\nWords: %d\nCharacters: %d\n", lines, words, chars);
  return 0;
}
